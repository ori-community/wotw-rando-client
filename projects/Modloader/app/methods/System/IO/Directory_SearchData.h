#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Directory_SearchData.h>
#include <Modloader/app/structs/SearchOption__Enum.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::IO::Directory_SearchData {
    IL2CPP_REGISTER_METHOD(0x00E332C0, void, ctor, (app::Directory_SearchData * this_ptr, app::String* full_path, app::String* user_path, app::SearchOption__Enum search_option))
}
