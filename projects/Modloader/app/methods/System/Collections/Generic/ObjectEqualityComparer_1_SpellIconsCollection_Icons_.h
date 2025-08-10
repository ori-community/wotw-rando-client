#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/ObjectEqualityComparer_1_SpellIconsCollection_Icons_.h>
#include <Modloader/app/structs/SpellIconsCollection_Icons.h>
#include <Modloader/app/structs/SpellIconsCollection_Icons__Array.h>

namespace app::classes::System::Collections::Generic::ObjectEqualityComparer_1_SpellIconsCollection_Icons_ {
    IL2CPP_REGISTER_METHOD(
        0x01CD0C40,
        bool,
        Equals_1,
        app::ObjectEqualityComparer_1_SpellIconsCollection_Icons_* this_ptr,
        app::SpellIconsCollection_Icons x,
        app::SpellIconsCollection_Icons y
    )
    IL2CPP_REGISTER_METHOD(
        0x01CD0900,
        int32_t,
        GetHashCode_1,
        app::ObjectEqualityComparer_1_SpellIconsCollection_Icons_* this_ptr,
        app::SpellIconsCollection_Icons obj
    )
    IL2CPP_REGISTER_METHOD(
        0x01CD0D00,
        int32_t,
        IndexOf,
        app::ObjectEqualityComparer_1_SpellIconsCollection_Icons_* this_ptr,
        app::SpellIconsCollection_Icons__Array* array,
        app::SpellIconsCollection_Icons value,
        int32_t start_index,
        int32_t count
    )
    IL2CPP_REGISTER_METHOD(
        0x01CD0E90,
        int32_t,
        LastIndexOf,
        app::ObjectEqualityComparer_1_SpellIconsCollection_Icons_* this_ptr,
        app::SpellIconsCollection_Icons__Array* array,
        app::SpellIconsCollection_Icons value,
        int32_t start_index,
        int32_t count
    )
    IL2CPP_REGISTER_METHOD(0x01CC3E60, bool, Equals_2, app::ObjectEqualityComparer_1_SpellIconsCollection_Icons_* this_ptr, app::Object* obj)
    IL2CPP_REGISTER_METHOD(0x01CC3EB0, int32_t, GetHashCode_2, app::ObjectEqualityComparer_1_SpellIconsCollection_Icons_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x019F8810, void, ctor, app::ObjectEqualityComparer_1_SpellIconsCollection_Icons_* this_ptr)
} // namespace app::classes::System::Collections::Generic::ObjectEqualityComparer_1_SpellIconsCollection_Icons_
