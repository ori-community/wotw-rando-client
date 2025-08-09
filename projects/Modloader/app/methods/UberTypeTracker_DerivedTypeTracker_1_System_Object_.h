#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Dictionary_2_System_Int32_System_Type_.h>
#include <Modloader/app/structs/Type.h>
#include <Modloader/app/structs/Type__Array.h>
#include <Modloader/app/structs/UberTypeTracker_DerivedTypeTracker_1_System_Object_.h>

namespace app::classes::UberTypeTracker_DerivedTypeTracker_1_System_Object_ {
    IL2CPP_REGISTER_METHOD(0x02263A00, app::Type__Array*, get_AllDerivedTypes, app::UberTypeTracker_DerivedTypeTracker_1_System_Object_* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x02264200,
        app::Dictionary_2_System_Int32_System_Type_*,
        get_IdToTypes,
        app::UberTypeTracker_DerivedTypeTracker_1_System_Object_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(0x02263A30, void, BuildTypeArray, app::UberTypeTracker_DerivedTypeTracker_1_System_Object_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02264230, app::Type*, GetTypeFromID, app::UberTypeTracker_DerivedTypeTracker_1_System_Object_* this_ptr, int32_t type_id)
    IL2CPP_REGISTER_METHOD(
        0x02264360,
        void,
        AddToMap,
        app::UberTypeTracker_DerivedTypeTracker_1_System_Object_* this_ptr,
        app::Dictionary_2_System_Int32_System_Type_* id_to_type_map
    )
    IL2CPP_REGISTER_METHOD(0x02264610, void, AddMapEntriesFromType, app::UberTypeTracker_DerivedTypeTracker_1_System_Object_* this_ptr, app::Type* type)
    IL2CPP_REGISTER_METHOD(0x018E6D70, void, ctor, app::UberTypeTracker_DerivedTypeTracker_1_System_Object_* this_ptr)
} // namespace app::classes::UberTypeTracker_DerivedTypeTracker_1_System_Object_
