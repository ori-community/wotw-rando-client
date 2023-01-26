#pragma once
#include <Modloader/app/structs/HttpCachePolicyElement.h>
#include <Modloader/app/structs/HttpCachePolicyElement__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace HttpCachePolicyElement {
        inline app::HttpCachePolicyElement__Class** type_info() {
            static app::HttpCachePolicyElement__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::HttpCachePolicyElement__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::HttpCachePolicyElement__Class* get_class() {
            return il2cpp::get_class<app::HttpCachePolicyElement__Class>(type_info(), "System.Net.Configuration", "HttpCachePolicyElement");
        }
        inline app::HttpCachePolicyElement* create() {
            return il2cpp::create_object<app::HttpCachePolicyElement>(get_class());
        }
    } // namespace HttpCachePolicyElement
} // namespace app::classes::types
