#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ComparisonComparer_1_CatlikeCoding_TextBox_TextBoxLine_.h>
#include <Modloader/app/structs/Comparison_1_CatlikeCoding_TextBox_TextBoxLine_.h>
#include <Modloader/app/structs/TextBoxLine.h>

namespace app::classes::System::Collections::Generic::ComparisonComparer_1_CatlikeCoding_TextBox_TextBoxLine_ {
    IL2CPP_REGISTER_METHOD(
        0x0162A010,
        void,
        ctor,
        app::ComparisonComparer_1_CatlikeCoding_TextBox_TextBoxLine_* this_ptr,
        app::Comparison_1_CatlikeCoding_TextBox_TextBoxLine_* comparison
    )
    IL2CPP_REGISTER_METHOD(
        0x0162A140,
        int32_t,
        Compare,
        app::ComparisonComparer_1_CatlikeCoding_TextBox_TextBoxLine_* this_ptr,
        app::TextBoxLine x,
        app::TextBoxLine y
    )
} // namespace app::classes::System::Collections::Generic::ComparisonComparer_1_CatlikeCoding_TextBox_TextBoxLine_
