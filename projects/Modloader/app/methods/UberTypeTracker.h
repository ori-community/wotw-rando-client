#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Dictionary_2_System_Type_UberTypeTracker_IDerivedTypeTracker_.h>
#include <Modloader/app/structs/Type.h>
#include <Modloader/app/structs/Type__Array.h>

namespace app::classes::UberTypeTracker {
    IL2CPP_REGISTER_METHOD(0x0314ABB0, app::Dictionary_2_System_Type_UberTypeTracker_IDerivedTypeTracker_*, get_AllTrackers, )
    IL2CPP_REGISTER_METHOD(0x0314AC50, void, cctor, )
    IL2CPP_REGISTER_METHOD(0x015E3500, void, RegisterNewDerivedTypeTracker, )
    IL2CPP_REGISTER_METHOD(0x015476D0, app::Type__Array*, GetAllDerivedTypesOf, )
    IL2CPP_REGISTER_METHOD(0x01546930, app::Type*, GetDerivedTypeFromID_1, int32_t id)
    IL2CPP_REGISTER_METHOD(0x01546930, app::Type*, GetDerivedTypeFromID_2, int32_t id)
} // namespace app::classes::UberTypeTracker
