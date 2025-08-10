#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/InteropHelp_UTF8StringHandle.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::Steamworks::InteropHelp_UTF8StringHandle {
    IL2CPP_REGISTER_METHOD(0x01600550, void, ctor, app::InteropHelp_UTF8StringHandle* this_ptr, app::String* str)
    IL2CPP_REGISTER_METHOD(0x016006D0, bool, ReleaseHandle, app::InteropHelp_UTF8StringHandle* this_ptr)
} // namespace app::classes::Steamworks::InteropHelp_UTF8StringHandle
