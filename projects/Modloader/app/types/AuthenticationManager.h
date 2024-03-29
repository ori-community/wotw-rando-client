#pragma once
#include <Modloader/app/structs/AuthenticationManager.h>
#include <Modloader/app/structs/AuthenticationManager__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AuthenticationManager {
        inline app::AuthenticationManager__Class** type_info() {
            static app::AuthenticationManager__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::AuthenticationManager__Class**)(modloader::win::memory::resolve_rva(0x04774AD8));
            }
            return cache;
        }
        inline app::AuthenticationManager__Class* get_class() {
            return il2cpp::get_class<app::AuthenticationManager__Class>(type_info(), "System.Net", "AuthenticationManager");
        }
        inline app::AuthenticationManager* create() {
            return il2cpp::create_object<app::AuthenticationManager>(get_class());
        }
    } // namespace AuthenticationManager
} // namespace app::classes::types
