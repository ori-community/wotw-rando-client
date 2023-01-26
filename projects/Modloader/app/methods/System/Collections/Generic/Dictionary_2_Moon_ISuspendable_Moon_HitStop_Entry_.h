#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Dictionary_2_Moon_ISuspendable_Moon_HitStop_Entry_.h>
#include <Modloader/app/structs/HitStop_Entry.h>
#include <Modloader/app/structs/ISuspendable.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_Moon_ISuspendable_Moon_HitStop_Entry_ {
    IL2CPP_REGISTER_METHOD(0x02BBA760, bool, TryGetValue, (app::Dictionary_2_Moon_ISuspendable_Moon_HitStop_Entry_ * this_ptr, app::ISuspendable* key, app::HitStop_Entry** value))
    IL2CPP_REGISTER_METHOD(0x02BAC170, void, Add, (app::Dictionary_2_Moon_ISuspendable_Moon_HitStop_Entry_ * this_ptr, app::ISuspendable* key, app::HitStop_Entry* value))
    IL2CPP_REGISTER_METHOD(0x02BD3EC0, bool, Remove, (app::Dictionary_2_Moon_ISuspendable_Moon_HitStop_Entry_ * this_ptr, app::ISuspendable* key))
    IL2CPP_REGISTER_METHOD(0x0283B900, void, Clear, (app::Dictionary_2_Moon_ISuspendable_Moon_HitStop_Entry_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0283AC20, void, ctor, (app::Dictionary_2_Moon_ISuspendable_Moon_HitStop_Entry_ * this_ptr))
} // namespace app::classes::System::Collections::Generic::Dictionary_2_Moon_ISuspendable_Moon_HitStop_Entry_
