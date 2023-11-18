#pragma once
#include <Modloader/app/structs/WebRequestModuleElementCollection.h>
#include <Modloader/app/structs/WebRequestModuleElementCollection__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WebRequestModuleElementCollection {
        inline app::WebRequestModuleElementCollection__Class** type_info() {
            static app::WebRequestModuleElementCollection__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::WebRequestModuleElementCollection__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::WebRequestModuleElementCollection__Class* get_class() {
            return il2cpp::get_class<app::WebRequestModuleElementCollection__Class>(type_info(), "System.Net.Configuration", "WebRequestModuleElementCollection");
        }
        inline app::WebRequestModuleElementCollection* create() {
            return il2cpp::create_object<app::WebRequestModuleElementCollection>(get_class());
        }
    } // namespace WebRequestModuleElementCollection
} // namespace app::classes::types
