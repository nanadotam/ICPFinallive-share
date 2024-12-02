#pragma once

namespace ICPFinal {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Summary for ManageStudents
	/// </summary>
	/// sqlConn->ConnectionString = "datasource=localhost; port=3306; username=root; password=; database=universityrecordsmanagement";
	public ref class ManageStudents : public System::Windows::Forms::Form
	{
		MySqlConnection^ sqlConn = gcnew MySqlConnection();
		MySqlCommand^ sqlCmd = gcnew MySqlCommand();
		DataTable^ sqlDt = gcnew DataTable();
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::TextBox^ textBox1;


		   MySqlDataAdapter^ sqlDtA = gcnew MySqlDataAdapter();
	public:
		property String^ UserEmail {
			String^ get() { return userEmail; }
			void set(String^ value) { userEmail = value; }
		}

		property String^ UserName {
			String^ get() { return userName; }
			void set(String^ value) { userName = value; }
		}
		property String^ UserRole {
			String^ get() { return userRole; }
			void set(String^ value) { userRole = value; }
		}
	public:
		ManageStudents(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
	private:
		String^ userEmail;
		String^ userName;
		String^ userRole;
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~ManageStudents()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Label^ label1;
	protected:


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(54, 125);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(2);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 62;
			this->dataGridView1->RowTemplate->Height = 28;
			this->dataGridView1->Size = System::Drawing::Size(1053, 479);
			this->dataGridView1->TabIndex = 0;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &ManageStudents::dataGridView1_CellContentClick);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Brown;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft PhagsPa", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label1->Location = System::Drawing::Point(425, 19);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(239, 36);
			this->label1->TabIndex = 44;
			this->label1->Text = L"Manage Students";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::MistyRose;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(505, 626);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(159, 31);
			this->button1->TabIndex = 45;
			this->button1->Text = L"Save Changes";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &ManageStudents::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::MistyRose;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(738, 84);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(159, 31);
			this->button2->TabIndex = 46;
			this->button2->Text = L"Add Student";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &ManageStudents::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::MistyRose;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(930, 84);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(159, 31);
			this->button3->TabIndex = 47;
			this->button3->Text = L"Delete Students";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &ManageStudents::button3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::MistyRose;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(552, 84);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(159, 31);
			this->button4->TabIndex = 48;
			this->button4->Text = L"Edit Student";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &ManageStudents::button4_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::MistyRose;
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(54, 84);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(159, 31);
			this->button5->TabIndex = 49;
			this->button5->Text = L"Search student";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &ManageStudents::button5_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(240, 90);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(212, 20);
			this->textBox1->TabIndex = 50;
			// 
			// ManageStudents
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Brown;
			this->ClientSize = System::Drawing::Size(1118, 687);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dataGridView1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"ManageStudents";
			this->Text = L" ";
			this->Load += gcnew System::EventHandler(this, &ManageStudents::ManageStudents_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private:
	void LoadStudents() {
		try {
			sqlConn->ConnectionString = "datasource=localhost; port=3306; username=root; password=; database=universityrecordsmanagement";
			sqlConn->Open();

			MySqlCommand^ sqlCmd = gcnew MySqlCommand(
				"SELECT s.student_id, u.first_name, u.last_name, u.gender, u.date_of_birth, "
				"u.email, u.contact_number, m.major_name, s.enrollment_date, s.graduation_date "
				"FROM students s "
				"JOIN users u ON s.user_id = u.user_id "
				"LEFT JOIN majors m ON s.major_id = m.major_id", sqlConn);

			MySqlDataAdapter^ sqlDtA = gcnew MySqlDataAdapter(sqlCmd);
			DataTable^ sqlDt = gcnew DataTable();
			sqlDtA->Fill(sqlDt);
			dataGridView1->DataSource = sqlDt;
			dataGridView1->ReadOnly = true;
			sqlConn->Close();
		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message);
		}
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		// Add Student button
		DataTable^ dt = safe_cast<DataTable^>(dataGridView1->DataSource);
		DataRow^ newRow = dt->NewRow();
		dt->Rows->Add(newRow);
		dataGridView1->ReadOnly = false;
	}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	// Delete Students button
	try {
		if (dataGridView1->SelectedRows->Count > 0) {
			if (MessageBox::Show("Are you sure you want to delete this student?", "Confirmation",
				MessageBoxButtons::YesNo) == System::Windows::Forms::DialogResult::Yes) {

				sqlConn->Open();
				int studentId = Convert::ToInt32(dataGridView1->SelectedRows[0]->Cells["student_id"]->Value);

				MySqlCommand^ sqlCmd = gcnew MySqlCommand(
					"DELETE FROM users WHERE user_id IN (SELECT user_id FROM students WHERE student_id = @student_id)",
					sqlConn);
				sqlCmd->Parameters->AddWithValue("@student_id", studentId);
				sqlCmd->ExecuteNonQuery();

				sqlConn->Close();
				LoadStudents();
			}
		}
		else {
			MessageBox::Show("Please select a student to delete.");
		}
	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->Message);
	}
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	// Save Changes button
	try {
		sqlConn->Open();
		DataTable^ changes = safe_cast<DataTable^>(dataGridView1->DataSource);

		for each (DataRow ^ row in changes->Rows) {
			if (row->RowState == DataRowState::Added) {
				// Insert new user first
				MySqlCommand^ userCmd = gcnew MySqlCommand(
					"INSERT INTO users (first_name, last_name, gender, date_of_birth, email, "
					"password_hash, user_type, contact_number) VALUES "
					"(@fname, @lname, @gender, @dob, @email, @pwd, 'student', @contact); "
					"SELECT LAST_INSERT_ID();", sqlConn);

				userCmd->Parameters->Add(gcnew MySqlParameter("@fname", row["first_name"]));
				userCmd->Parameters->Add(gcnew MySqlParameter("@lname", row["last_name"]));
				userCmd->Parameters->Add(gcnew MySqlParameter("@gender", row["gender"]));
				userCmd->Parameters->Add(gcnew MySqlParameter("@dob", Convert::ToDateTime(row["date_of_birth"])));
				userCmd->Parameters->Add(gcnew MySqlParameter("@email", row["email"]));
				userCmd->Parameters->Add(gcnew MySqlParameter("@pwd", "defaultpassword")); // You might want to generate this
				userCmd->Parameters->Add(gcnew MySqlParameter("@contact", row["contact_number"]));

				int userId = Convert::ToInt32(userCmd->ExecuteScalar());

				// Then insert student
				MySqlCommand^ studentCmd = gcnew MySqlCommand(
					"INSERT INTO students (user_id, major_id, enrollment_date, graduation_date) "
					"VALUES (@user_id, (SELECT major_id FROM majors WHERE major_name = @major), "
					"@enroll_date, @grad_date)", sqlConn);

				MySqlParameter^ gradDateParam = gcnew MySqlParameter("@grad_date", MySqlDbType::Date);
				if (row["graduation_date"]->GetType() == DBNull::typeid) {
					gradDateParam->Value = DBNull::Value;
				}
				else {
					gradDateParam->Value = Convert::ToDateTime(row["graduation_date"]);
				}

				studentCmd->Parameters->Add(gcnew MySqlParameter("@user_id", userId));
				studentCmd->Parameters->Add(gcnew MySqlParameter("@major", row["major_name"]));
				studentCmd->Parameters->Add(gcnew MySqlParameter("@enroll_date", Convert::ToDateTime(row["enrollment_date"])));
				studentCmd->Parameters->Add(gradDateParam);

				studentCmd->ExecuteNonQuery();
			}
			else if (row->RowState == DataRowState::Modified) {
				int studentId = Convert::ToInt32(row["student_id"]);

				// Update user information
				MySqlCommand^ updateCmd = gcnew MySqlCommand(
					"UPDATE users u "
					"JOIN students s ON u.user_id = s.user_id "
					"SET u.first_name = @fname, u.last_name = @lname, "
					"u.gender = @gender, u.date_of_birth = @dob, "
					"u.email = @email, u.contact_number = @contact, "
					"s.major_id = (SELECT major_id FROM majors WHERE major_name = @major), "
					"s.enrollment_date = @enroll_date, s.graduation_date = @grad_date "
					"WHERE s.student_id = @student_id", sqlConn);

				MySqlParameter^ gradDateParam = gcnew MySqlParameter("@grad_date", MySqlDbType::Date);
				if (row["graduation_date"]->GetType() == DBNull::typeid) {
					gradDateParam->Value = DBNull::Value;
				}
				else {
					gradDateParam->Value = Convert::ToDateTime(row["graduation_date"]);
				}

				updateCmd->Parameters->Add(gcnew MySqlParameter("@student_id", studentId));
				updateCmd->Parameters->Add(gcnew MySqlParameter("@fname", row["first_name"]));
				updateCmd->Parameters->Add(gcnew MySqlParameter("@lname", row["last_name"]));
				updateCmd->Parameters->Add(gcnew MySqlParameter("@gender", row["gender"]));
				updateCmd->Parameters->Add(gcnew MySqlParameter("@dob", Convert::ToDateTime(row["date_of_birth"])));
				updateCmd->Parameters->Add(gcnew MySqlParameter("@email", row["email"]));
				updateCmd->Parameters->Add(gcnew MySqlParameter("@contact", row["contact_number"]));
				updateCmd->Parameters->Add(gcnew MySqlParameter("@major", row["major_name"]));
				updateCmd->Parameters->Add(gcnew MySqlParameter("@enroll_date", Convert::ToDateTime(row["enrollment_date"])));
				updateCmd->Parameters->Add(gradDateParam);

				updateCmd->ExecuteNonQuery();
			}
		}

		sqlConn->Close();
		dataGridView1->ReadOnly = true;
		LoadStudents();
		MessageBox::Show("Changes saved successfully!");
	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->Message);
	}
}
private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	// Edit Student button
	if (dataGridView1->SelectedRows->Count > 0) {
		dataGridView1->ReadOnly = false;
	}
	else {
		MessageBox::Show("Please select a student to edit.");
	}
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	// Search student button
	try {
		sqlConn->Open();
		String^ searchTerm = textBox1->Text;

		MySqlCommand^ sqlCmd = gcnew MySqlCommand(
			"SELECT s.student_id, u.first_name, u.last_name, u.gender, u.date_of_birth, "
			"u.email, u.contact_number, m.major_name, s.enrollment_date, s.graduation_date "
			"FROM students s "
			"JOIN users u ON s.user_id = u.user_id "
			"LEFT JOIN majors m ON s.major_id = m.major_id "
			"WHERE u.first_name LIKE @search OR u.last_name LIKE @search OR u.email LIKE @search",
			sqlConn);

		sqlCmd->Parameters->AddWithValue("@search", "%" + searchTerm + "%");

		MySqlDataAdapter^ sqlDtA = gcnew MySqlDataAdapter(sqlCmd);
		DataTable^ sqlDt = gcnew DataTable();
		sqlDtA->Fill(sqlDt);
		dataGridView1->DataSource = sqlDt;

		sqlConn->Close();
	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->Message);
	}
}
private: System::Void ManageStudents_Load(System::Object^ sender, System::EventArgs^ e) {
	LoadStudents();
}
};
}
