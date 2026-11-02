#include "FocusableCanvasPanel.h"
#include "ESlateVisibility.h"

UFocusableCanvasPanel::UFocusableCanvasPanel() {
    this->bPreventsFocusChecks = true;
    this->Visibility = ESlateVisibility::Visible;
}


