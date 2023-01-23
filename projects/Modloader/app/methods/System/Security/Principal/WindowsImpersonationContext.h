#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/WindowsImpersonationContext.h>

namespace app::classes::System::Security::Principal::WindowsImpersonationContext {
    IL2CPP_REGISTER_METHOD(0x01E1D690, void, ctor, (app::WindowsImpersonationContext * this_ptr, void* token))
    IL2CPP_REGISTER_METHODINFO(0x04721648, WindowsImpersonationContext__ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01E1D6C0, void, Dispose, (app::WindowsImpersonationContext * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E1D6E0, void, Undo, (app::WindowsImpersonationContext * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04742D78, WindowsImpersonationContext_Undo__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01E1D710, bool, CloseToken, (void* token))
    IL2CPP_REGISTER_METHOD(0x01E1D720, void*, DuplicateToken, (void* token))
    IL2CPP_REGISTER_METHOD(0x01E1D730, bool, SetCurrentToken, (void* token))
    IL2CPP_REGISTER_METHOD(0x01E1D740, bool, RevertToSelf, ())
} // namespace app::classes::System::Security::Principal::WindowsImpersonationContext
