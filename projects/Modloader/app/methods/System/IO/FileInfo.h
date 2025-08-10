#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DirectoryInfo.h>
#include <Modloader/app/structs/FileInfo.h>
#include <Modloader/app/structs/FileStream.h>
#include <Modloader/app/structs/SerializationInfo.h>
#include <Modloader/app/structs/StreamingContext.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::IO::FileInfo {
    IL2CPP_REGISTER_METHOD(0x01E085A0, void, ctor_1, app::FileInfo* this_ptr, app::String* file_name)
    IL2CPP_REGISTER_METHOD(0x01E08710, void, Init, app::FileInfo* this_ptr, app::String* file_name, bool check_host)
    IL2CPP_REGISTER_METHOD(0x00502220, app::String*, GetDisplayPath, app::FileInfo* this_ptr, app::String* original_path)
    IL2CPP_REGISTER_METHOD(0x01E087E0, void, ctor_2, app::FileInfo* this_ptr, app::SerializationInfo* info, app::StreamingContext context)
    IL2CPP_REGISTER_METHOD(0x002FBB80, app::String*, get_Name, app::FileInfo* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01E088C0, int64_t, get_Length, app::FileInfo* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01E08940, app::String*, get_DirectoryName, app::FileInfo* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01E089E0, app::DirectoryInfo*, get_Directory, app::FileInfo* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01E08BD0, bool, get_Exists, app::FileInfo* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01E08C80, app::FileStream*, OpenRead, app::FileInfo* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBB60, app::String*, ToString, app::FileInfo* this_ptr)
} // namespace app::classes::System::IO::FileInfo
