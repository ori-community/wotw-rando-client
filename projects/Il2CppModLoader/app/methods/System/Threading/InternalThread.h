#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Threading::InternalThread {
    IL2CPP_REGISTER_METHOD(0x027DE2D0, void, Thread_free_internal, (app::InternalThread * this_ptr))
    IL2CPP_REGISTER_METHOD(0x027DE320, void, Finalize, (app::InternalThread * this_ptr))
} // namespace app::classes::System::Threading::InternalThread
