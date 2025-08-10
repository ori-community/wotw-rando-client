#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/UberPoolGroupWarmer__Array.h>
#include <Modloader/app/structs/UberPoolTimeslicedPrewarmer.h>

namespace app::classes::UberPoolTimeslicedPrewarmer {
    IL2CPP_REGISTER_METHOD(0x002FB990, app::UberPoolGroupWarmer__Array*, get_Warmers, app::UberPoolTimeslicedPrewarmer* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB9A0, void, set_Warmers, app::UberPoolTimeslicedPrewarmer* this_ptr, app::UberPoolGroupWarmer__Array* value)
    IL2CPP_REGISTER_METHOD(0x00FED1C0, void, Update, app::UberPoolTimeslicedPrewarmer* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00FED960, void, BeginPrewarm, app::UberPoolTimeslicedPrewarmer* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00FEDA70, void, FinishPrewarm, app::UberPoolTimeslicedPrewarmer* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00FEDBA0, void, ctor, app::UberPoolTimeslicedPrewarmer* this_ptr)
} // namespace app::classes::UberPoolTimeslicedPrewarmer
