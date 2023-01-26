#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/FileSystemEnumerableIterator_1_System_String_.h>
#include <Modloader/app/structs/SearchOption__Enum.h>
#include <Modloader/app/structs/SearchResultHandler_1_System_String_.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::IO::FileSystemEnumerableIterator_1_System_String_ {
    IL2CPP_REGISTER_METHOD(0x0297E2F0, void, ctor, (app::FileSystemEnumerableIterator_1_System_String_ * this_ptr, app::String* path, app::String* original_user_path, app::String* search_pattern, app::SearchOption__Enum search_option, app::SearchResultHandler_1_System_String_* result_handler, bool check_host))
}
