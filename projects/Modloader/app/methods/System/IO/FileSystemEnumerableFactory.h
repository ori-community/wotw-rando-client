#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/IEnumerable_1_System_String_.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/SearchOption__Enum.h>

namespace app::classes::System::IO::FileSystemEnumerableFactory {
    IL2CPP_REGISTER_METHOD(0x0236F420, app::IEnumerable_1_System_String_*, CreateFileNameIterator, (app::String * path, app::String* original_user_path, app::String* search_pattern, bool include_files, bool include_dirs, app::SearchOption__Enum search_option, bool check_host))
}
