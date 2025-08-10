#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/StackGuard.h>

namespace app::classes::System::Threading::Tasks::StackGuard {
    IL2CPP_REGISTER_METHOD(0x0232FB80, bool, TryBeginInliningScope, app::StackGuard* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0232FB90, void, EndInliningScope, app::StackGuard* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, CheckForSufficientStack, app::StackGuard* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::StackGuard* this_ptr)
} // namespace app::classes::System::Threading::Tasks::StackGuard
