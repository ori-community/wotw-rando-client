#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Threading::Tasks::TaskSchedulerException {
    IL2CPP_REGISTER_METHOD(0x0233FF80, void, ctor_1, (app::TaskSchedulerException * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02340030, void, ctor_2, (app::TaskSchedulerException * this_ptr, app::Exception* inner_exception))
    IL2CPP_REGISTER_METHOD(0x023400F0, void, ctor_3, (app::TaskSchedulerException * this_ptr, app::SerializationInfo* info, app::StreamingContext context))
} // namespace app::classes::System::Threading::Tasks::TaskSchedulerException
