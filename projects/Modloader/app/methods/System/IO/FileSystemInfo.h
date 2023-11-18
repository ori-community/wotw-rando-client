#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/FileSystemInfo.h>
#include <Modloader/app/structs/DateTime.h>
#include <Modloader/app/structs/SerializationInfo.h>
#include <Modloader/app/structs/StreamingContext.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::IO::FileSystemInfo {
    IL2CPP_REGISTER_METHOD(0x0236F7E0, void, ctor_1, (app::FileSystemInfo * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0236F880, void, ctor_2, (app::FileSystemInfo * this_ptr, app::SerializationInfo* info, app::StreamingContext context))
    IL2CPP_REGISTER_METHOD(0x002FB9F0, app::String*, get_FullName, (app::FileSystemInfo * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0236F9B0, app::String*, get_Extension, (app::FileSystemInfo * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0236FB60, app::DateTime, get_LastWriteTime, (app::FileSystemInfo * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0236FC50, app::DateTime, get_LastWriteTimeUtc, (app::FileSystemInfo * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0236FD30, void, Refresh, (app::FileSystemInfo * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0236FE30, void, GetObjectData, (app::FileSystemInfo * this_ptr, app::SerializationInfo* info, app::StreamingContext context))
    IL2CPP_REGISTER_METHOD(0x002FBB60, app::String*, get_DisplayPath, (app::FileSystemInfo * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBB70, void, set_DisplayPath, (app::FileSystemInfo * this_ptr, app::String* value))
} // namespace app::classes::System::IO::FileSystemInfo
