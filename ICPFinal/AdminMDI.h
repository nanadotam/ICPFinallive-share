#pragma once
#include "Profile.h"
#include "AssignFaculty.h"
#include "ManageStudents.h"

namespace ICPFinal {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for AdminMDI
	/// </summary>
	public ref class AdminMDI : public System::Windows::Forms::Form
	{
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
		AdminMDI(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~AdminMDI()
		{
			if (components)
			{
				delete components;
			}
		}
	private:
		String^ userEmail;
		String^ userName;
		String^ userRole;
	private: Profile^ profileForm;
	private: AssignFaculty^ assign;
	private: ManageStudents^ students;
	private: System::Windows::Forms::ToolStripMenuItem^ studentToolStripMenuItem;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ newStudentToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ oldStudentToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ facultyToolStripMenuItem;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ profileToolStripMenuItem;


	private: System::Windows::Forms::ToolStripMenuItem^ generateTranscriptToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ curriculumToolStripMenuItem;

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
			this->studentToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->newStudentToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->oldStudentToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->facultyToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->profileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->generateTranscriptToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->curriculumToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// studentToolStripMenuItem
			// 
			this->studentToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->newStudentToolStripMenuItem,
					this->oldStudentToolStripMenuItem
			});
			this->studentToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Lucida Bright", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->studentToolStripMenuItem->Name = L"studentToolStripMenuItem";
			this->studentToolStripMenuItem->Size = System::Drawing::Size(57, 22);
			this->studentToolStripMenuItem->Text = L"Enroll";
			// 
			// newStudentToolStripMenuItem
			// 
			this->newStudentToolStripMenuItem->Name = L"newStudentToolStripMenuItem";
			this->newStudentToolStripMenuItem->Size = System::Drawing::Size(196, 22);
			this->newStudentToolStripMenuItem->Text = L"Enrollment history";
			// 
			// oldStudentToolStripMenuItem
			// 
			this->oldStudentToolStripMenuItem->Name = L"oldStudentToolStripMenuItem";
			this->oldStudentToolStripMenuItem->Size = System::Drawing::Size(196, 22);
			this->oldStudentToolStripMenuItem->Text = L"New Enrollment";
			// 
			// facultyToolStripMenuItem
			// 
			this->facultyToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Lucida Bright", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->facultyToolStripMenuItem->Name = L"facultyToolStripMenuItem";
			this->facultyToolStripMenuItem->Size = System::Drawing::Size(126, 22);
			this->facultyToolStripMenuItem->Text = L"Manage Students";
			this->facultyToolStripMenuItem->Click += gcnew System::EventHandler(this, &AdminMDI::facultyToolStripMenuItem_Click);
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(32, 32);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->profileToolStripMenuItem,
					this->facultyToolStripMenuItem, this->studentToolStripMenuItem, this->generateTranscriptToolStripMenuItem, this->curriculumToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Padding = System::Windows::Forms::Padding(3, 1, 0, 1);
			this->menuStrip1->Size = System::Drawing::Size(559, 24);
			this->menuStrip1->TabIndex = 3;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// profileToolStripMenuItem
			// 
			this->profileToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Lucida Bright", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->profileToolStripMenuItem->Name = L"profileToolStripMenuItem";
			this->profileToolStripMenuItem->Size = System::Drawing::Size(62, 22);
			this->profileToolStripMenuItem->Text = L"Profile";
			this->profileToolStripMenuItem->Click += gcnew System::EventHandler(this, &AdminMDI::profileToolStripMenuItem_Click);
			// 
			// generateTranscriptToolStripMenuItem
			// 
			this->generateTranscriptToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Lucida Bright", 9.75F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->generateTranscriptToolStripMenuItem->Name = L"generateTranscriptToolStripMenuItem";
			this->generateTranscriptToolStripMenuItem->Size = System::Drawing::Size(120, 22);
			this->generateTranscriptToolStripMenuItem->Text = L"Assign Faculty";
			this->generateTranscriptToolStripMenuItem->Click += gcnew System::EventHandler(this, &AdminMDI::generateTranscriptToolStripMenuItem_Click);
			// 
			// curriculumToolStripMenuItem
			// 
			this->curriculumToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Lucida Bright", 9.75F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->curriculumToolStripMenuItem->Name = L"curriculumToolStripMenuItem";
			this->curriculumToolStripMenuItem->Size = System::Drawing::Size(93, 22);
			this->curriculumToolStripMenuItem->Text = L"Curriculum";
			// 
			// AdminMDI
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(559, 448);
			this->Controls->Add(this->menuStrip1);
			this->IsMdiContainer = true;
			this->Name = L"AdminMDI";
			this->Text = L"AdminMDI";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &AdminMDI::AdminMDI_FormClosing);
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &AdminMDI::AdminMDI_FormClosed);
			this->Load += gcnew System::EventHandler(this, &AdminMDI::AdminMDI_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void AdminMDI_Load(System::Object^ sender, System::EventArgs^ e) {
		this->Text = L"University Management Admin Section - Welcome " + UserName;
	}
private: System::Void profileToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	// Close existing profile form if it exists
	if (profileForm != nullptr && !profileForm->IsDisposed)
	{
		profileForm->Focus();
		return;
	}
	// Create and show new profile form
	profileForm = gcnew Profile();
	profileForm->UserEmail = this->UserEmail;
	profileForm->UserName = this->UserName;
	profileForm->UserRole = this->UserRole;
	profileForm->MdiParent = this;
	profileForm->Show();
}
private: System::Void AdminMDI_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
}
private: System::Void AdminMDI_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e) {
	if (this->Owner != nullptr)
	{
		this->Owner->Show();
	}
}
private: System::Void generateTranscriptToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	if (assign != nullptr && !assign->IsDisposed)
	{
		assign->Focus();
		return;
	}
	// Create and show new profile form
	assign = gcnew AssignFaculty();
	assign->UserEmail = this->UserEmail;
	assign->UserName = this->UserName;
	assign->UserRole = this->UserRole;
	assign->MdiParent = this;
	assign->Show();
}
private: System::Void facultyToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	if (students != nullptr && !students->IsDisposed)
	{
		students->Focus();
		return;
	}
	// Create and show new profile form
	students = gcnew ManageStudents();
	students->UserEmail = this->UserEmail;
	students->UserName = this->UserName;
	students->UserRole = this->UserRole;
	students->MdiParent = this;
	students->Show();
}
};
}
