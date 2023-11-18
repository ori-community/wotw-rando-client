#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DirectoryInfo.h>
#include <Modloader/app/structs/ArrayList.h>
#include <Modloader/app/structs/DirectoryInfo__Array.h>
#include <Modloader/app/structs/FileInfo__Array.h>
#include <Modloader/app/structs/SearchOption__Enum.h>
#include <Modloader/app/structs/SerializationInfo.h>
#include <Modloader/app/structs/StreamingContext.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::IO::DirectoryInfo {
    IL2CPP_REGISTER_METHOD(0x01E03AC0, void, ctor_1, (app::DirectoryInfo * this_ptr, app::String* path))
    IL2CPP_REGISTER_METHOD(0x01E03AD0, void, ctor_2, (app::DirectoryInfo * this_ptr, app::String* path, bool simple_original_path))
    IL2CPP_REGISTER_METHOD(0x01E03C70, void, ctor_3, (app::DirectoryInfo * this_ptr, app::SerializationInfo* info, app::StreamingContext context))
    IL2CPP_REGISTER_METHOD(0x01E03CA0, void, Initialize, (app::DirectoryInfo * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E03F50, bool, get_Exists, (app::DirectoryInfo * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBB80, app::String*, get_Name, (app::DirectoryInfo * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E03F90, app::DirectoryInfo*, get_Parent, (app::DirectoryInfo * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E04110, void, Create, (app::DirectoryInfo * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E04120, app::FileInfo__Array*, GetFiles_1, (app::DirectoryInfo * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E041B0, app::FileInfo__Array*, GetFiles_2, (app::DirectoryInfo * this_ptr, app::String* search_pattern))
    IL2CPP_REGISTER_METHOD(0x01E044C0, app::DirectoryInfo__Array*, GetDirectories_1, (app::DirectoryInfo * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E04550, app::DirectoryInfo__Array*, GetDirectories_2, (app::DirectoryInfo * this_ptr, app::String* search_pattern))
    IL2CPP_REGISTER_METHOD(0x002FBB40, app::String*, ToString, (app::DirectoryInfo * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E04920, int32_t, GetFilesSubdirs, (app::DirectoryInfo * this_ptr, app::ArrayList* l, app::String* pattern))
    IL2CPP_REGISTER_METHOD(0x01E04A70, app::FileInfo__Array*, GetFiles_3, (app::DirectoryInfo * this_ptr, app::String* search_pattern, app::SearchOption__Enum search_option))
    IL2CPP_REGISTER_METHOD(0x01E04EB0, void, CheckPath, (app::DirectoryInfo * this_ptr, app::String* path))
} // namespace app::classes::System::IO::DirectoryInfo
