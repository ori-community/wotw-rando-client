#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Process.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/ProcessInfo.h>
#include <Modloader/app/structs/ProcessStartInfo.h>
#include <Modloader/app/structs/ISynchronizeInvoke.h>
#include <Modloader/app/structs/StreamWriter.h>
#include <Modloader/app/structs/StreamReader.h>
#include <Modloader/app/structs/SafeProcessHandle.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Process_State__Enum.h>
#include <Modloader/app/structs/Process_ProcInfo.h>
#include <Modloader/app/structs/void.h>

namespace app::classes::System::Diagnostics::Process {
    IL2CPP_REGISTER_METHOD(0x01FFE840, void, ctor_1, (app::Process * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01FFE900, void, ctor_2, (app::Process * this_ptr, app::String* machine_name, bool is_remote_machine, int32_t process_id, app::ProcessInfo* process_info))
    IL2CPP_REGISTER_METHOD(0x01FFE9E0, bool, get_Associated, (app::Process * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01FFE9F0, bool, get_HasExited, (app::Process * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0476B248, Process_get_HasExited__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01FFEE00, void*, get_Handle, (app::Process * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01FFEF30, int32_t, get_Id, (app::Process * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01FFEF50, app::ProcessStartInfo*, get_StartInfo, (app::Process * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01FFF1D0, app::ISynchronizeInvoke*, get_SynchronizingObject, (app::Process * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01FFF330, app::StreamWriter*, get_StandardInput, (app::Process * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0478CDF8, Process_get_StandardInput__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01FFF400, app::StreamReader*, get_StandardOutput, (app::Process * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0474D8D0, Process_get_StandardOutput__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01FFF520, void, ReleaseProcessHandle, (app::Process * this_ptr, app::SafeProcessHandle* handle))
    IL2CPP_REGISTER_METHOD(0x01FFF550, void, CompletionCallback, (app::Process * this_ptr, app::Object* context, bool was_signaled))
    IL2CPP_REGISTER_METHODINFO(0x04733628, Process_CompletionCallback__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01FFF570, void, Dispose, (app::Process * this_ptr, bool disposing))
    IL2CPP_REGISTER_METHOD(0x01FFF5C0, void, Close, (app::Process * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01FFF7B0, void, EnsureState, (app::Process * this_ptr, app::Process_State__Enum state))
    IL2CPP_REGISTER_METHODINFO(0x047358D0, Process_EnsureState__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01FFFA10, void, EnsureWatchingForExit, (app::Process * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04716BF8, Process_EnsureWatchingForExit__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01FFFD40, app::Process*, GetCurrentProcess, ())
    IL2CPP_REGISTER_METHOD(0x01FFFF20, void, OnExited, (app::Process * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02000160, app::SafeProcessHandle*, GetProcessHandle_1, (app::Process * this_ptr, int32_t access, bool throw_if_exited))
    IL2CPP_REGISTER_METHODINFO(0x0475EEE0, Process_GetProcessHandle__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02000670, app::SafeProcessHandle*, GetProcessHandle_2, (app::Process * this_ptr, int32_t access))
    IL2CPP_REGISTER_METHOD(0x02000680, app::SafeProcessHandle*, OpenProcessHandle, (app::Process * this_ptr, int32_t access))
    IL2CPP_REGISTER_METHODINFO(0x047476C8, Process_OpenProcessHandle__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02000790, void, Refresh, (app::Process * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020007B0, void, SetProcessHandle, (app::Process * this_ptr, app::SafeProcessHandle* process_handle))
    IL2CPP_REGISTER_METHOD(0x020007D0, void, SetProcessId, (app::Process * this_ptr, int32_t process_id))
    IL2CPP_REGISTER_METHOD(0x020007E0, bool, Start, (app::Process * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047341A0, Process_Start__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x020008F0, void, Kill, (app::Process * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0471BC80, Process_Kill__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02000A70, void, StopWatchingForExit, (app::Process * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02000B80, app::String*, ToString, (app::Process * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02000CE0, bool, WaitForExit_1, (app::Process * this_ptr, int32_t milliseconds))
    IL2CPP_REGISTER_METHOD(0x02001070, void, WaitForExit_2, (app::Process * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02001080, app::String*, ProcessName_internal_1, (void* handle))
    IL2CPP_REGISTER_METHOD(0x02001180, app::String*, ProcessName_internal_2, (app::SafeProcessHandle * handle))
    IL2CPP_REGISTER_METHOD(0x020013D0, app::String*, get_ProcessName, (app::Process * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047754D0, Process_get_ProcessName__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, ShellExecuteEx_internal, (app::ProcessStartInfo * start_info, app::Process_ProcInfo* proc_info))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CreateProcess_internal, (app::ProcessStartInfo * start_info, void* stdin_1, void* stdout_1, void* stderr_1, app::Process_ProcInfo* proc_info))
    IL2CPP_REGISTER_METHOD(0x02001630, bool, StartWithShellExecuteEx, (app::Process * this_ptr, app::ProcessStartInfo* start_info))
    IL2CPP_REGISTER_METHODINFO(0x0478BC48, Process_StartWithShellExecuteEx__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02001A20, void, CreatePipe, (app::void** read, app::void** write, bool write_direction))
    IL2CPP_REGISTER_METHODINFO(0x0471EBC0, Process_CreatePipe__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02001DA0, bool, get_IsWindows, ())
    IL2CPP_REGISTER_METHOD(0x02001DE0, bool, StartWithCreateProcess, (app::Process * this_ptr, app::ProcessStartInfo* start_info))
    IL2CPP_REGISTER_METHODINFO(0x0474FAF0, Process_StartWithCreateProcess__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02003370, void, FillUserInfo, (app::ProcessStartInfo * start_info, app::Process_ProcInfo* proc_info))
    IL2CPP_REGISTER_METHOD(0x020034F0, void, RaiseOnExited, (app::Process * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, cctor, ())
} // namespace app::classes::System::Diagnostics::Process
