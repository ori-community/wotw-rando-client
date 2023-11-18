#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SearchResult.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Win32Native_WIN32_FIND_DATA.h>

namespace app::classes::System::IO::SearchResult {
    IL2CPP_REGISTER_METHOD(0x00522850, void, ctor, (app::SearchResult * this_ptr, app::String* full_path, app::String* user_path, app::Win32Native_WIN32_FIND_DATA* find_data))
    IL2CPP_REGISTER_METHOD(0x002FB930, app::String*, get_UserPath, (app::SearchResult * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB950, app::Win32Native_WIN32_FIND_DATA*, get_FindData, (app::SearchResult * this_ptr))
} // namespace app::classes::System::IO::SearchResult
