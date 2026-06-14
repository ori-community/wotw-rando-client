#pragma once
#include <Modloader/app/structs/XalUser_XalUserChangeEventHandler.h>
#include <Modloader/app/structs/XalUser_XalUserChangeEventHandler__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XalUser_XalUserChangeEventHandler {
        inline app::XalUser_XalUserChangeEventHandler__Class** type_info() {
            static app::XalUser_XalUserChangeEventHandler__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XalUser_XalUserChangeEventHandler__Class**)(modloader::win::memory::resolve_rva(0x04784B38));
            }
            return cache;
        }
        inline app::XalUser_XalUserChangeEventHandler__Class* get_class() {
            return il2cpp::get_nested_class<app::XalUser_XalUserChangeEventHandler__Class>(type_info(), "Microsoft.Xbox.Services.Xal", "XalUser", "XalUserChangeEventHandler");
        }
        inline app::XalUser_XalUserChangeEventHandler* create() {
            return il2cpp::create_object<app::XalUser_XalUserChangeEventHandler>(get_class());
        }
    } // namespace XalUser_XalUserChangeEventHandler
} // namespace app::classes::types
