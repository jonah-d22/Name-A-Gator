#pragma once
#include "map.h"
#include "MapWrapper.h"
#include <msclr/marshal_cppstd.h>
#include <msclr/marshal.h>
#include <string>
#include <sstream>
#include <chrono>



namespace NAGGui {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Runtime::InteropServices;
	

	using namespace msclr::interop;

	
	/// <summary>
	/// Summary for Window
	/// </summary>
	/// 
	/// 
	public ref class Window : public System::Windows::Forms::Form
	{

	public:

		Window(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			mapper = gcnew MapWrapper();

			pictureBox1->SendToBack();
			
			//GENDER BOX DROP DOWN
			ArrayList^ genderList = gcnew ArrayList();
			genderList->Add("Female");
			genderList->Add("Male");

			// Add the items from the ArrayList to the combo box
			for each (String ^ gender in genderList)
			{
				GenderBox->Items->Add(gender);
			}

			// Set the default selected item
			GenderBox->SelectedIndex = 0;

			//Make state check box
			array<String^>^ stateArray = gcnew array<String^>{
				"AL", "AK", "AZ", "AR", "CA", "CO", "CT", "DC", "DE", "FL", "GA", "HI",
					"ID", "IL", "IN", "IA", "KS", "KY", "LA", "ME", "MD", "MA", "MI", "MN",
					"MS", "MO", "MT", "NE", "NV", "NH", "NJ", "NM", "NY", "NC", "ND", "OH",
					"OK", "OR", "PA", "RI", "SC", "SD", "TN", "TX", "UT", "VT", "VA", "WA",
					"WV", "WI", "WY"
			};

			for each (String ^ state in stateArray)
			{
				StateBox->Items->Add(state);
			}

			//Sort Options
			ArrayList^ sortTypeArrayList = gcnew ArrayList();
			sortTypeArrayList->Add("Merge Sort");
			sortTypeArrayList->Add("Quick Sort");
			sortTypeArrayList->Add("Comb Sort");
			sortTypeArrayList->Add("Tim Sort");

			// Add the items from the ArrayList to the combo box
			for each (String ^ sortType in sortTypeArrayList)
			{
				SortTypeDropDown->Items->Add(sortType);
			}

			// Set the default selected item
			SortTypeDropDown->SelectedIndex = 0;

			//BOTTOM TEN ROWS
			int labelHeight_Bottom = BottomTen->Height / 10;

			// Add ten labels to the panel
			for (int i = 1; i <= 10; i++)
			{
				Label^ label = gcnew Label();
				label->Name = "uniquityLabel" + i;
				label->Text = "-";
				label->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
				label->AutoSize = false;
				label->Width = BottomTen->Width;
				label->Height = labelHeight_Bottom;
				label->Top = (i - 1) * labelHeight_Bottom;
				BottomTen->Controls->Add(label);
			}

			//TOP TEN ROWS
			int labelHeight_Top = TopTen->Height / 10;

			// Add ten labels to the panel
			for (int i = 1; i <= 10; i++)
			{
				Label^ label = gcnew Label();
				label->Name = "commonLabel" + i;
				label->Text = "-";
				label->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
				label->AutoSize = false;
				label->Width = TopTen->Width;
				label->Height = labelHeight_Top;
				label->Top = (i - 1) * labelHeight_Top;
				TopTen->Controls->Add(label);
			}


			//SEARCHED NAMES SPECIFICALLY PANEL
			int labelHeight_Search = SearchedNamesPanel->Height / 10;

			// Add ten labels to the panel
			for (int i = 1; i <= 10; i++)
			{
				Label^ label = gcnew Label();
				label->Name = "search" + i;
				label->Text = "-";
				label->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
				label->AutoSize = false;
				label->Width = SearchedNamesPanel->Width;
				label->Height = labelHeight_Search;
				label->Top = (i - 1) * labelHeight_Search;
				SearchedNamesPanel->Controls->Add(label);
			}
			
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Window()
		{
			if (components)
			{
				delete components;
			}
		}
	
	
	private: MapWrapper^ mapper;

	private: System::Windows::Forms::Label^ Title;


	private: System::Windows::Forms::TextBox^ NameInput;
	private: System::Windows::Forms::Label^ NameInputLabel;
	private: System::Windows::Forms::Label^ label1;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ year_from_TB;
	private: System::Windows::Forms::TextBox^ year_to_TB;


	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;



	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::CheckedListBox^ StateBox;

	private: System::Windows::Forms::ComboBox^ GenderBox;
	private: System::Windows::Forms::ComboBox^ SortTypeDropDown;
	private: System::Windows::Forms::Button^ SearchButton;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ OutputLabl;





















	private: System::Windows::Forms::Panel^ BottomTen;
	private: System::Windows::Forms::Panel^ TopTen;
private: System::Windows::Forms::Label^ label6;
private: System::Windows::Forms::Label^ label5;
private: System::Windows::Forms::Label^ label9;
private: System::Windows::Forms::Panel^ SearchedNamesPanel;
private: System::Windows::Forms::PictureBox^ pictureBox1;
private: System::Windows::Forms::Label^ label10;



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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Window::typeid));
			this->Title = (gcnew System::Windows::Forms::Label());
			this->NameInput = (gcnew System::Windows::Forms::TextBox());
			this->NameInputLabel = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->year_from_TB = (gcnew System::Windows::Forms::TextBox());
			this->year_to_TB = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->StateBox = (gcnew System::Windows::Forms::CheckedListBox());
			this->GenderBox = (gcnew System::Windows::Forms::ComboBox());
			this->SortTypeDropDown = (gcnew System::Windows::Forms::ComboBox());
			this->SearchButton = (gcnew System::Windows::Forms::Button());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->SearchedNamesPanel = (gcnew System::Windows::Forms::Panel());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->TopTen = (gcnew System::Windows::Forms::Panel());
			this->BottomTen = (gcnew System::Windows::Forms::Panel());
			this->OutputLabl = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// Title
			// 
			this->Title->AutoSize = true;
			this->Title->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->Title->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->Title->Font = (gcnew System::Drawing::Font(L"OCR A Extended", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Title->Location = System::Drawing::Point(371, 9);
			this->Title->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->Title->Name = L"Title";
			this->Title->Size = System::Drawing::Size(502, 50);
			this->Title->TabIndex = 0;
			this->Title->Text = L"NAME - A - GATOR";
			this->Title->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// NameInput
			// 
			this->NameInput->Font = (gcnew System::Drawing::Font(L"OCR A Extended", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->NameInput->Location = System::Drawing::Point(83, 130);
			this->NameInput->Margin = System::Windows::Forms::Padding(2);
			this->NameInput->Name = L"NameInput";
			this->NameInput->Size = System::Drawing::Size(251, 19);
			this->NameInput->TabIndex = 2;
			this->NameInput->Text = L"Separate Names by Spaces";
			// 
			// NameInputLabel
			// 
			this->NameInputLabel->AutoSize = true;
			this->NameInputLabel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->NameInputLabel->Font = (gcnew System::Drawing::Font(L"OCR A Extended", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->NameInputLabel->Location = System::Drawing::Point(85, 112);
			this->NameInputLabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->NameInputLabel->Name = L"NameInputLabel";
			this->NameInputLabel->Size = System::Drawing::Size(96, 17);
			this->NameInputLabel->TabIndex = 3;
			this->NameInputLabel->Text = L"Name(s):";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->label1->Font = (gcnew System::Drawing::Font(L"OCR A Extended", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(85, 170);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(85, 17);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Gender:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->label2->Font = (gcnew System::Drawing::Font(L"OCR A Extended", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(84, 211);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(217, 17);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Year or Year Range:";
			// 
			// year_from_TB
			// 
			this->year_from_TB->Font = (gcnew System::Drawing::Font(L"OCR A Extended", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->year_from_TB->Location = System::Drawing::Point(83, 238);
			this->year_from_TB->Margin = System::Windows::Forms::Padding(2);
			this->year_from_TB->Name = L"year_from_TB";
			this->year_from_TB->Size = System::Drawing::Size(103, 19);
			this->year_from_TB->TabIndex = 7;
			this->year_from_TB->Text = L"MIN";
			// 
			// year_to_TB
			// 
			this->year_to_TB->Font = (gcnew System::Drawing::Font(L"OCR A Extended", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->year_to_TB->Location = System::Drawing::Point(231, 238);
			this->year_to_TB->Margin = System::Windows::Forms::Padding(2);
			this->year_to_TB->Name = L"year_to_TB";
			this->year_to_TB->Size = System::Drawing::Size(103, 19);
			this->year_to_TB->TabIndex = 8;
			this->year_to_TB->Text = L"MAX";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"OCR A Extended", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(198, 234);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(21, 20);
			this->label3->TabIndex = 9;
			this->label3->Text = L"-";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->label4->Font = (gcnew System::Drawing::Font(L"OCR A Extended", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(84, 484);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(140, 17);
			this->label4->TabIndex = 10;
			this->label4->Text = L"Sorting Type";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->label7->Font = (gcnew System::Drawing::Font(L"OCR A Extended", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(84, 274);
			this->label7->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(173, 17);
			this->label7->TabIndex = 14;
			this->label7->Text = L"State Selection";
			// 
			// StateBox
			// 
			this->StateBox->CheckOnClick = true;
			this->StateBox->FormattingEnabled = true;
			this->StateBox->Location = System::Drawing::Point(84, 299);
			this->StateBox->Margin = System::Windows::Forms::Padding(2);
			this->StateBox->Name = L"StateBox";
			this->StateBox->Size = System::Drawing::Size(247, 154);
			this->StateBox->TabIndex = 51;
			// 
			// GenderBox
			// 
			this->GenderBox->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->GenderBox->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->GenderBox->FormattingEnabled = true;
			this->GenderBox->Location = System::Drawing::Point(189, 170);
			this->GenderBox->Margin = System::Windows::Forms::Padding(2);
			this->GenderBox->Name = L"GenderBox";
			this->GenderBox->Size = System::Drawing::Size(145, 21);
			this->GenderBox->TabIndex = 16;
			// 
			// SortTypeDropDown
			// 
			this->SortTypeDropDown->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->SortTypeDropDown->FormattingEnabled = true;
			this->SortTypeDropDown->Location = System::Drawing::Point(225, 482);
			this->SortTypeDropDown->Margin = System::Windows::Forms::Padding(2);
			this->SortTypeDropDown->Name = L"SortTypeDropDown";
			this->SortTypeDropDown->Size = System::Drawing::Size(105, 21);
			this->SortTypeDropDown->TabIndex = 17;
			// 
			// SearchButton
			// 
			this->SearchButton->BackColor = System::Drawing::Color::DarkGreen;
			this->SearchButton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->SearchButton->Font = (gcnew System::Drawing::Font(L"OCR A Extended", 36, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->SearchButton->ForeColor = System::Drawing::Color::DarkOrange;
			this->SearchButton->Location = System::Drawing::Point(97, 521);
			this->SearchButton->Margin = System::Windows::Forms::Padding(2);
			this->SearchButton->Name = L"SearchButton";
			this->SearchButton->Size = System::Drawing::Size(215, 84);
			this->SearchButton->TabIndex = 52;
			this->SearchButton->Text = L"SEARCH";
			this->SearchButton->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->SearchButton->UseVisualStyleBackColor = false;
			this->SearchButton->Click += gcnew System::EventHandler(this, &Window::SearchButton_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::Green;
			this->label8->Font = (gcnew System::Drawing::Font(L"OCR A Extended", 22, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(652, 112);
			this->label8->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(280, 32);
			this->label8->TabIndex = 53;
			this->label8->Text = L"SEARCH RESULTS";
			this->label8->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->panel1->Controls->Add(this->label9);
			this->panel1->Controls->Add(this->SearchedNamesPanel);
			this->panel1->Controls->Add(this->label6);
			this->panel1->Controls->Add(this->label5);
			this->panel1->Controls->Add(this->TopTen);
			this->panel1->Controls->Add(this->BottomTen);
			this->panel1->Controls->Add(this->OutputLabl);
			this->panel1->Location = System::Drawing::Point(397, 165);
			this->panel1->Margin = System::Windows::Forms::Padding(2);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(789, 441);
			this->panel1->TabIndex = 54;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"OCR A Extended", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(513, 75);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(196, 13);
			this->label9->TabIndex = 6;
			this->label9->Text = L"Searched Name Results";
			// 
			// SearchedNamesPanel
			// 
			this->SearchedNamesPanel->BackColor = System::Drawing::Color::Bisque;
			this->SearchedNamesPanel->Location = System::Drawing::Point(470, 95);
			this->SearchedNamesPanel->Name = L"SearchedNamesPanel";
			this->SearchedNamesPanel->Size = System::Drawing::Size(279, 333);
			this->SearchedNamesPanel->TabIndex = 4;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"OCR A Extended", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(247, 75);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(187, 13);
			this->label6->TabIndex = 5;
			this->label6->Text = L"10 Most Common Names";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"OCR A Extended", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(18, 75);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(187, 13);
			this->label5->TabIndex = 4;
			this->label5->Text = L"10 Most Unique Names";
			// 
			// TopTen
			// 
			this->TopTen->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->TopTen->Location = System::Drawing::Point(243, 95);
			this->TopTen->Name = L"TopTen";
			this->TopTen->Size = System::Drawing::Size(200, 333);
			this->TopTen->TabIndex = 3;
			// 
			// BottomTen
			// 
			this->BottomTen->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->BottomTen->Location = System::Drawing::Point(13, 95);
			this->BottomTen->Name = L"BottomTen";
			this->BottomTen->Size = System::Drawing::Size(200, 333);
			this->BottomTen->TabIndex = 2;
			// 
			// OutputLabl
			// 
			this->OutputLabl->AutoSize = true;
			this->OutputLabl->Font = (gcnew System::Drawing::Font(L"OCR A Extended", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->OutputLabl->Location = System::Drawing::Point(20, 17);
			this->OutputLabl->Name = L"OutputLabl";
			this->OutputLabl->Size = System::Drawing::Size(33, 20);
			this->OutputLabl->TabIndex = 0;
			this->OutputLabl->Text = L"--";
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox1->Location = System::Drawing::Point(1068, -20);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(225, 238);
			this->pictureBox1->TabIndex = 55;
			this->pictureBox1->TabStop = false;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"OCR A Extended", 14, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(80, 68);
			this->label10->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(1087, 20);
			this->label10->TabIndex = 56;
			this->label10->Text = L"What is uniquity\?  We define uniquity as how unique your name is based off of rea"
				L"l US census data.";
			// 
			// Window
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->BackColor = System::Drawing::Color::CornflowerBlue;
			this->ClientSize = System::Drawing::Size(1280, 637);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->SearchButton);
			this->Controls->Add(this->SortTypeDropDown);
			this->Controls->Add(this->GenderBox);
			this->Controls->Add(this->StateBox);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->year_to_TB);
			this->Controls->Add(this->year_from_TB);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->NameInputLabel);
			this->Controls->Add(this->NameInput);
			this->Controls->Add(this->Title);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->Name = L"Window";
			this->Text = L"Window";
			this->Load += gcnew System::EventHandler(this, &Window::Window_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


	private: System::Void Window_Load(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void SearchButton_Click(System::Object^ sender, System::EventArgs^ e) {

		//NAMES: get from text box and convert from system to std library string type
		String^ inputNames = NameInput->Text;
		std::string convertNames = msclr::interop::marshal_as<std::string>(inputNames);
		
		std::vector<std::string> userNames;
	
		std::stringstream ss(convertNames);
		std::string name;
		while (ss >> name) {
			userNames.push_back(name);
		}
		
		String^ selectedGender = GenderBox->SelectedItem->ToString();
		//std::string gender = marshal_as<std::string>(selectedGender);

		int fromYear = Int32::Parse(year_from_TB->Text);
		int toYear = Int32::Parse(year_to_TB->Text);

		//State Setter
		//Iterate through the checked items in the CheckedListBox
		//Declare a vector of strings to hold the checked state names
		std::vector<std::string> checkedStates;

		// Iterate through the checked items in the CheckedListBox
		for (int i = 0; i < StateBox->CheckedItems->Count; i++)
		{
			// Convert the checked item to a string and add it to the vector
			checkedStates.push_back(msclr::interop::marshal_as<std::string>(StateBox->CheckedItems[i]->ToString()));
		}

		if (checkedStates.size() == 0) {
			mapper->setAllStatesBool(true);
		}
		else {
			mapper->updateStateList(checkedStates);
		}

		mapper->setUniquitiesForAllNames(selectedGender, fromYear, toYear);

		OutputLabl->Text = "Loading Results!";

		//Bottom 10 (Most Unique for Search)
		std::vector<std::pair<std::string, float>>* uniquities = &mapper->getUniquityVector();

		auto begin_sort_time = std::chrono::system_clock::now();

		//SORTS
		if (SortTypeDropDown->SelectedItem->ToString() == "Merge Sort") {
			mapper->mergeSort(*uniquities, 0, uniquities->size() - 1);
		}
		else if (SortTypeDropDown->SelectedItem->ToString() == "Quick Sort") {
			mapper->quickSort(*uniquities, 0, uniquities->size() - 1);
		}
		else if (SortTypeDropDown->SelectedItem->ToString() == "Tim Sort") {
			mapper->timSort(*uniquities, uniquities->size());
		}
		else {
			mapper->combSort(*uniquities);
		}

		auto end_sort_time = std::chrono::system_clock::now();
		std::chrono::duration<double> sort_load_time = end_sort_time - begin_sort_time;

		double myDouble = std::chrono::duration_cast<std::chrono::duration<double>>(sort_load_time).count();
		System::String^ time = System::Convert::ToString(myDouble);

		OutputLabl->Text = "Search Completed in: " + time + " seconds";

		// Loop through the first ten pairs in the vector and set the Text property of each label
		for (int i = 0; i < 10 && i < uniquities->size(); i++) {
			// get the label control by name
			Label^ temp_label = dynamic_cast<Label^>(BottomTen->Controls->Find("uniquityLabel" + (i + 1), true)[0]);

			// set the text of the label to the unique name and its uniquity score
			temp_label->Text = gcnew String((std::to_string(i + 1) + ". " + uniquities->at(i).first + ": " + std::to_string(uniquities->at(i).second * 100) + "%").c_str());

		}
		int j = 0;
		int k = 1;
		// Loop through the last ten pairs in the vector and set the Text property of each label
		for (int i = uniquities->size()-1; i > uniquities->size() - 11; i--) {
			// get the label control by name
			Label^ temp_label = dynamic_cast<Label^>(TopTen->Controls->Find("commonLabel" + (j + 1), true)[0]);

			// set the text of the label to the unique name and its uniquity score
			temp_label->Text = gcnew String((std::to_string(k) + ". " + uniquities->at(i).first + ": " + std::to_string(uniquities->at(i).second * 100) + "%").c_str());
			j++;
			k++;
		}

		mapper->setRankingsVector(userNames);

		// Loop through searched names and set the Text property of each label
		for (int i = 0; i < 10; i++) {
			// get the label control by name
			Label^ temp_label = dynamic_cast<Label^>(SearchedNamesPanel->Controls->Find("search" + (i + 1), true)[0]);

			// set the text of the label to the unique name and its uniquity score

			temp_label->Text = "-";
		}

		std::vector<std::pair<std::string, float>>* name_ranks = &mapper->getRankingsVector();

		// Loop through searched names and set the Text property of each label
		for (int i = 0; i < userNames.size(); i++) {
			// get the label control by name
			Label^ temp_label = dynamic_cast<Label^>(SearchedNamesPanel->Controls->Find("search" + (i + 1), true)[0]);

			// set the text of the label to the unique name and its uniquity score

			temp_label->Text = gcnew String((std::to_string(i + 1) + ". " + userNames[i] + ": " + name_ranks->at(i).first + "  " + std::to_string(name_ranks->at(i).second * 100) + "%").c_str());
		}


		//Reset for next search
		mapper->clearUniquities();
		mapper->setAllStatesBool(false);
		mapper->clearRanksVec();
	}

};
}
