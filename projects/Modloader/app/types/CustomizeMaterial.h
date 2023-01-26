#pragma once
#include <Modloader/app/structs/CustomizeMaterial.h>
#include <Modloader/app/structs/CustomizeMaterial__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CustomizeMaterial {
        inline app::CustomizeMaterial__Class** type_info() {
            static app::CustomizeMaterial__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CustomizeMaterial__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CustomizeMaterial__Class* get_class() {
            return il2cpp::get_class<app::CustomizeMaterial__Class>(type_info(), "", "CustomizeMaterial");
        }
        inline app::CustomizeMaterial* create() {
            return il2cpp::create_object<app::CustomizeMaterial>(get_class());
        }
    } // namespace CustomizeMaterial
} // namespace app::classes::types
