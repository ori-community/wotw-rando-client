#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/String__Array.h>
#include <Modloader/app/structs/DirectoryInfo.h>
#include <Modloader/app/structs/SearchOption__Enum.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::IO::Directory {
    IL2CPP_REGISTER_METHOD(0x01E01E10, app::String__Array*, GetFiles_1, (app::String * path))
    IL2CPP_REGISTER_METHOD(0x01E01EF0, app::String__Array*, GetFiles_2, (app::String * path, app::String* search_pattern))
    IL2CPP_REGISTER_METHOD(0x01E02010, app::String__Array*, GetFiles_3, (app::String * path, app::String* search_pattern, app::SearchOption__Enum search_option))
    IL2CPP_REGISTER_METHOD(0x01E02190, app::String__Array*, InternalGetFiles, (app::String * path, app::String* search_pattern, app::SearchOption__Enum search_option))
    IL2CPP_REGISTER_METHOD(0x01E021C0, app::String__Array*, GetDirectories_1, (app::String * path))
    IL2CPP_REGISTER_METHOD(0x01E022A0, app::String__Array*, GetDirectories_2, (app::String * path, app::String* search_pattern))
    IL2CPP_REGISTER_METHOD(0x01E023C0, app::String__Array*, InternalGetDirectories, (app::String * path, app::String* search_pattern, app::SearchOption__Enum search_option))
    IL2CPP_REGISTER_METHOD(0x01E023F0, app::String__Array*, InternalGetFileDirectoryNames, (app::String * path, app::String* user_path_original, app::String* search_pattern, bool include_files, bool include_dirs, app::SearchOption__Enum search_option, bool check_host))
    IL2CPP_REGISTER_METHOD(0x01E025B0, app::DirectoryInfo*, CreateDirectory, (app::String * path))
    IL2CPP_REGISTER_METHOD(0x01E02840, app::DirectoryInfo*, CreateDirectoriesInternal, (app::String * path))
    IL2CPP_REGISTER_METHOD(0x01E02B80, void, Delete_1, (app::String * path))
    IL2CPP_REGISTER_METHOD(0x01E02EC0, void, RecursiveDelete, (app::String * path))
    IL2CPP_REGISTER_METHOD(0x01E03070, void, Delete_2, (app::String * path, bool recursive))
    IL2CPP_REGISTER_METHOD(0x01E03140, bool, Exists, (app::String * path))
    IL2CPP_REGISTER_METHOD(0x01A18980, app::String*, GetCurrentDirectory, ())
    IL2CPP_REGISTER_METHOD(0x01E032C0, app::String*, InsecureGetCurrentDirectory, ())
    IL2CPP_REGISTER_METHOD(0x01E03420, bool, IsRootDirectory, (app::String * path))
    IL2CPP_REGISTER_METHOD(0x01E03560, app::DirectoryInfo*, GetParent, (app::String * path))
    IL2CPP_REGISTER_METHOD(0x01E03850, app::String*, GetDemandDir, (app::String * full_path, bool this_dir_only))
} // namespace app::classes::System::IO::Directory
