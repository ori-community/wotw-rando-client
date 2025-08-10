#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Comparer_1_CatlikeCoding_TextBox_MoonIconRenderer_IconObject_.h>
#include <Modloader/app/structs/Comparison_1_CatlikeCoding_TextBox_MoonIconRenderer_IconObject_.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Collections::Generic::Comparer_1_CatlikeCoding_TextBox_MoonIconRenderer_IconObject_ {
    IL2CPP_REGISTER_METHOD(0x02807CD0, app::Comparer_1_CatlikeCoding_TextBox_MoonIconRenderer_IconObject_*, get_Default, )
    IL2CPP_REGISTER_METHOD(
        0x02C96150,
        app::Comparer_1_CatlikeCoding_TextBox_MoonIconRenderer_IconObject_*,
        Create,
        app::Comparison_1_CatlikeCoding_TextBox_MoonIconRenderer_IconObject_* comparison
    )
    IL2CPP_REGISTER_METHOD(0x02C96350, app::Comparer_1_CatlikeCoding_TextBox_MoonIconRenderer_IconObject_*, CreateComparer, )
    IL2CPP_REGISTER_METHOD(
        0x02808F10,
        int32_t,
        IComparer_Compare,
        app::Comparer_1_CatlikeCoding_TextBox_MoonIconRenderer_IconObject_* this_ptr,
        app::Object* x,
        app::Object* y
    )
    IL2CPP_REGISTER_METHOD(0x018E6D70, void, ctor, app::Comparer_1_CatlikeCoding_TextBox_MoonIconRenderer_IconObject_* this_ptr)
} // namespace app::classes::System::Collections::Generic::Comparer_1_CatlikeCoding_TextBox_MoonIconRenderer_IconObject_
