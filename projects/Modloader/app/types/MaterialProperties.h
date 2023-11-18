#pragma once
#include <Modloader/app/structs/MaterialProperties.h>
#include <Modloader/app/structs/MaterialProperties__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MaterialProperties {
        inline app::MaterialProperties__Class** type_info() {
            static app::MaterialProperties__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MaterialProperties__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MaterialProperties__Class* get_class() {
            return il2cpp::get_class<app::MaterialProperties__Class>(type_info(), "", "MaterialProperties");
        }
        inline app::MaterialProperties* create() {
            return il2cpp::create_object<app::MaterialProperties>(get_class());
        }
    } // namespace MaterialProperties
} // namespace app::classes::types
