#pragma once
#include <Modloader/app/structs/WebUtility.h>
#include <Modloader/app/structs/WebUtility__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WebUtility {
        inline app::WebUtility__Class** type_info() {
            static app::WebUtility__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::WebUtility__Class**)(modloader::win::memory::resolve_rva(0x04738F08));
            }
            return cache;
        }
        inline app::WebUtility__Class* get_class() {
            return il2cpp::get_class<app::WebUtility__Class>(type_info(), "System.Net", "WebUtility");
        }
        inline app::WebUtility* create() {
            return il2cpp::create_object<app::WebUtility>(get_class());
        }
    } // namespace WebUtility
} // namespace app::classes::types
