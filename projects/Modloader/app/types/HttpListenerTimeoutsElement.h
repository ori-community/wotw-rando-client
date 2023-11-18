#pragma once
#include <Modloader/app/structs/HttpListenerTimeoutsElement.h>
#include <Modloader/app/structs/HttpListenerTimeoutsElement__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace HttpListenerTimeoutsElement {
        inline app::HttpListenerTimeoutsElement__Class** type_info() {
            static app::HttpListenerTimeoutsElement__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::HttpListenerTimeoutsElement__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::HttpListenerTimeoutsElement__Class* get_class() {
            return il2cpp::get_class<app::HttpListenerTimeoutsElement__Class>(type_info(), "System.Net.Configuration", "HttpListenerTimeoutsElement");
        }
        inline app::HttpListenerTimeoutsElement* create() {
            return il2cpp::create_object<app::HttpListenerTimeoutsElement>(get_class());
        }
    } // namespace HttpListenerTimeoutsElement
} // namespace app::classes::types
