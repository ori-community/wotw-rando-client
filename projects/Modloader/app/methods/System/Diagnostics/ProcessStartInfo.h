#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Encoding.h>
#include <Modloader/app/structs/Process.h>
#include <Modloader/app/structs/ProcessStartInfo.h>
#include <Modloader/app/structs/ProcessWindowStyle__Enum.h>
#include <Modloader/app/structs/SecureString.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/StringDictionary.h>

namespace app::classes::System::Diagnostics::ProcessStartInfo {
    IL2CPP_REGISTER_METHOD(0x020035C0, void, ctor, app::ProcessStartInfo* this_ptr, app::Process* parent)
    IL2CPP_REGISTER_METHOD(0x02003720, app::String*, get_Arguments, app::ProcessStartInfo* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB940, void, set_Arguments, app::ProcessStartInfo* this_ptr, app::String* value)
    IL2CPP_REGISTER_METHOD(0x0069FA40, void, set_CreateNoWindow, app::ProcessStartInfo* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x020037B0, app::StringDictionary*, get_EnvironmentVariables, app::ProcessStartInfo* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00675C60, bool, get_RedirectStandardInput, app::ProcessStartInfo* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00675C70, void, set_RedirectStandardInput, app::ProcessStartInfo* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x008543B0, bool, get_RedirectStandardOutput, app::ProcessStartInfo* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00DC31D0, void, set_RedirectStandardOutput, app::ProcessStartInfo* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x0194FC70, bool, get_RedirectStandardError, app::ProcessStartInfo* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBBE0, app::Encoding*, get_StandardErrorEncoding, app::ProcessStartInfo* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBBC0, app::Encoding*, get_StandardOutputEncoding, app::ProcessStartInfo* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00446590, bool, get_UseShellExecute, app::ProcessStartInfo* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005150D0, void, set_UseShellExecute, app::ProcessStartInfo* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x02003C60, app::String*, get_UserName, app::ProcessStartInfo* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBB60, app::SecureString*, get_Password, app::ProcessStartInfo* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02003CF0, app::String*, get_Domain, app::ProcessStartInfo* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0051DB40, bool, get_LoadUserProfile, app::ProcessStartInfo* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02003D80, app::String*, get_FileName, app::ProcessStartInfo* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA490, void, set_FileName, app::ProcessStartInfo* this_ptr, app::String* value)
    IL2CPP_REGISTER_METHOD(0x02003E10, app::String*, get_WorkingDirectory, app::ProcessStartInfo* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02003EA0, void, set_WindowStyle, app::ProcessStartInfo* this_ptr, app::ProcessWindowStyle__Enum value)
    IL2CPP_REGISTER_METHOD(0x0107BE90, bool, get_HaveEnvVars, app::ProcessStartInfo* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02004020, void, cctor, )
} // namespace app::classes::System::Diagnostics::ProcessStartInfo
