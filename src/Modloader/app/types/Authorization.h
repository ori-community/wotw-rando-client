#pragma once
#include <Modloader/app/structs/Authorization.h>
#include <Modloader/app/structs/Authorization__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Authorization {
        inline app::Authorization__Class** type_info() {
            static app::Authorization__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Authorization__Class**)(modloader::win::memory::resolve_rva(0x0474C108));
            }
            return cache;
        }
        inline app::Authorization__Class* get_class() {
            return il2cpp::get_class<app::Authorization__Class>(type_info(), "System.Net", "Authorization");
        }
        inline app::Authorization* create() {
            return il2cpp::create_object<app::Authorization>(get_class());
        }
    } // namespace Authorization
} // namespace app::classes::types
