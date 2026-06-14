#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Int32Enum__Enum.h>
#include <Modloader/app/structs/KeyValuePair_2_System_Int32Enum_SpellIconsCollection_Icons___Boxed.h>
#include <Modloader/app/structs/SpellIconsCollection_Icons.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Collections::Generic::KeyValuePair_2_System_Int32Enum_SpellIconsCollection_Icons_ {
    IL2CPP_REGISTER_METHOD(
        0x001504E0,
        void,
        ctor,
        app::KeyValuePair_2_System_Int32Enum_SpellIconsCollection_Icons___Boxed* this_ptr,
        app::Int32Enum__Enum key,
        app::SpellIconsCollection_Icons value
    )
    IL2CPP_REGISTER_METHOD(0x0010E170, app::Int32Enum__Enum, get_Key, app::KeyValuePair_2_System_Int32Enum_SpellIconsCollection_Icons___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x00150500,
        app::SpellIconsCollection_Icons,
        get_Value,
        app::KeyValuePair_2_System_Int32Enum_SpellIconsCollection_Icons___Boxed* this_ptr
    )
    IL2CPP_REGISTER_METHOD(0x00150520, app::String*, ToString, app::KeyValuePair_2_System_Int32Enum_SpellIconsCollection_Icons___Boxed* this_ptr)
} // namespace app::classes::System::Collections::Generic::KeyValuePair_2_System_Int32Enum_SpellIconsCollection_Icons_
