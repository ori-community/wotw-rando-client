#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SeinRide_RideState.h>
#include <Modloader/app/structs/Dictionary_2_RideableTypes_SeinRide_RideState_.h>
#include <Modloader/app/structs/RideableTypes__Enum.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_RideableTypes_SeinRide_RideState_ {
    IL2CPP_REGISTER_METHOD(0x02C35530, app::SeinRide_RideState*, get_Item, (app::Dictionary_2_RideableTypes_SeinRide_RideState_ * this_ptr, app::RideableTypes__Enum key))
    IL2CPP_REGISTER_METHOD(0x0283AC20, void, ctor, (app::Dictionary_2_RideableTypes_SeinRide_RideState_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02BAC170, void, Add, (app::Dictionary_2_RideableTypes_SeinRide_RideState_ * this_ptr, app::RideableTypes__Enum key, app::SeinRide_RideState* value))
} // namespace app::classes::System::Collections::Generic::Dictionary_2_RideableTypes_SeinRide_RideState_
