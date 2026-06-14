#pragma once
#include <Modloader/app/structs/WebRequestModulesSection.h>
#include <Modloader/app/structs/WebRequestModulesSection__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WebRequestModulesSection {
        inline app::WebRequestModulesSection__Class** type_info() {
            static app::WebRequestModulesSection__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::WebRequestModulesSection__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::WebRequestModulesSection__Class* get_class() {
            return il2cpp::get_class<app::WebRequestModulesSection__Class>(type_info(), "System.Net.Configuration", "WebRequestModulesSection");
        }
        inline app::WebRequestModulesSection* create() {
            return il2cpp::create_object<app::WebRequestModulesSection>(get_class());
        }
    } // namespace WebRequestModulesSection
} // namespace app::classes::types
