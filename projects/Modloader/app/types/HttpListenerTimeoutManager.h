#pragma once
#include <Modloader/app/structs/HttpListenerTimeoutManager.h>
#include <Modloader/app/structs/HttpListenerTimeoutManager__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace HttpListenerTimeoutManager {
        inline app::HttpListenerTimeoutManager__Class** type_info() {
            static app::HttpListenerTimeoutManager__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::HttpListenerTimeoutManager__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::HttpListenerTimeoutManager__Class* get_class() {
            return il2cpp::get_class<app::HttpListenerTimeoutManager__Class>(type_info(), "System.Net", "HttpListenerTimeoutManager");
        }
        inline app::HttpListenerTimeoutManager* create() {
            return il2cpp::create_object<app::HttpListenerTimeoutManager>(get_class());
        }
    } // namespace HttpListenerTimeoutManager
} // namespace app::classes::types
