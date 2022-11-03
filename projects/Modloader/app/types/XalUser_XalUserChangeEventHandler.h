#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace XalUser_XalUserChangeEventHandler {
        inline app::XalUser_XalUserChangeEventHandler__Class** type_info = (app::XalUser_XalUserChangeEventHandler__Class**)(modloader::win::memory::resolve_rva(0x04784B38));
        inline app::XalUser_XalUserChangeEventHandler__Class* get_class() {
            return il2cpp::get_nested_class<app::XalUser_XalUserChangeEventHandler__Class>(type_info, "Microsoft.Xbox.Services.Xal", "XalUser", "XalUserChangeEventHandler");
        }
        inline app::XalUser_XalUserChangeEventHandler* create() {
            return il2cpp::create_object<app::XalUser_XalUserChangeEventHandler>(get_class());
        }
    } // namespace XalUser_XalUserChangeEventHandler
} // namespace app::classes::types
