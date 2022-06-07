#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Threading::SynchronizationLockException {
    IL2CPP_REGISTER_METHOD(0x0232E540, void, ctor_1, (app::SynchronizationLockException * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0232E5D0, void, ctor_2, (app::SynchronizationLockException * this_ptr, app::String * message))
    IL2CPP_REGISTER_METHOD(0x01A0FAA0, void, ctor_3, (app::SynchronizationLockException * this_ptr, app::SerializationInfo * info, app::StreamingContext context))
}
