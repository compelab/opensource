import bb.cascades 1.2

Page {
    
    Container {

        
        Label {
            id:mLabel
            // Localized text with the dynamic translation and locale updates support
            text: qsTr("Hello World") + Retranslate.onLocaleOrLanguageChanged
            textStyle.base: SystemDefaults.TextStyles.BigText
        }
        
        Button {
            
            
            text: "BOTAO"
            
            onClicked: {
                mLabel.text = "Clickou"
            }
        }
        RadioGroup {
            options: [
                Option {
                    text: ":D"
                },
                Option {
                    text: ":("
                },
                Option {
                    text: ":)"
                }
            ]
        
        }
        Slider {
        
        }
    
    }
}