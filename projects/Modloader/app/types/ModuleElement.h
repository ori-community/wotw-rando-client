#pragma once
#include <Modloader/app/structs/ModuleElement.h>
#include <Modloader/app/structs/ModuleElement__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ModuleElement {
        inline app::ModuleElement__Class** type_info() {
            static app::ModuleElement__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ModuleElement__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ModuleElement__Class* get_class() {
            return il2cpp::get_class<app::ModuleElement__Class>(type_info(), "System.Net.Configuration", "ModuleElement");
        }
        inline app::ModuleElement* create() {
            return il2cpp::create_object<app::ModuleElement>(get_class());
        }
    } // namespace ModuleElement
} // namespace app::classes::types
