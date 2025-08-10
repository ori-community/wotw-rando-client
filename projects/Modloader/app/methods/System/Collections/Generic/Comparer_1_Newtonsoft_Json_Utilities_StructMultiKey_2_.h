#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Comparer_1_Newtonsoft_Json_Utilities_StructMultiKey_2_.h>
#include <Modloader/app/structs/Comparison_1_Newtonsoft_Json_Utilities_StructMultiKey_2_.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Collections::Generic::Comparer_1_Newtonsoft_Json_Utilities_StructMultiKey_2_ {
    IL2CPP_REGISTER_METHOD(0x02807CD0, app::Comparer_1_Newtonsoft_Json_Utilities_StructMultiKey_2_*, get_Default, )
    IL2CPP_REGISTER_METHOD(
        0x028206B0,
        app::Comparer_1_Newtonsoft_Json_Utilities_StructMultiKey_2_*,
        Create,
        app::Comparison_1_Newtonsoft_Json_Utilities_StructMultiKey_2_* comparison
    )
    IL2CPP_REGISTER_METHOD(0x028208B0, app::Comparer_1_Newtonsoft_Json_Utilities_StructMultiKey_2_*, CreateComparer, )
    IL2CPP_REGISTER_METHOD(
        0x028085A0,
        int32_t,
        IComparer_Compare,
        app::Comparer_1_Newtonsoft_Json_Utilities_StructMultiKey_2_* this_ptr,
        app::Object* x,
        app::Object* y
    )
    IL2CPP_REGISTER_METHOD(0x018E6D70, void, ctor, app::Comparer_1_Newtonsoft_Json_Utilities_StructMultiKey_2_* this_ptr)
} // namespace app::classes::System::Collections::Generic::Comparer_1_Newtonsoft_Json_Utilities_StructMultiKey_2_
