#pragma once
#include <Modloader/app/structs/UberShaderPrefabWarmer.h>
#include <Modloader/app/structs/UberShaderPrefabWarmer__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberShaderPrefabWarmer {
        inline app::UberShaderPrefabWarmer__Class** type_info() {
            static app::UberShaderPrefabWarmer__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UberShaderPrefabWarmer__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UberShaderPrefabWarmer__Class* get_class() {
            return il2cpp::get_class<app::UberShaderPrefabWarmer__Class>(type_info(), "", "UberShaderPrefabWarmer");
        }
        inline app::UberShaderPrefabWarmer* create() {
            return il2cpp::create_object<app::UberShaderPrefabWarmer>(get_class());
        }
    } // namespace UberShaderPrefabWarmer
} // namespace app::classes::types
