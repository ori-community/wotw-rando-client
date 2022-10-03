#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::IO::StringResultHandler {
    IL2CPP_REGISTER_METHOD(0x02384010, void, ctor, (app::StringResultHandler * this_ptr, bool include_files, bool include_dirs))
    IL2CPP_REGISTER_METHOD(0x023840B0, bool, IsResultIncluded, (app::StringResultHandler * this_ptr, app::SearchResult* result))
    IL2CPP_REGISTER_METHOD(0x00AD4920, app::String*, CreateObject, (app::StringResultHandler * this_ptr, app::SearchResult* result))
} // namespace app::classes::System::IO::StringResultHandler
