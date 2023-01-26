#pragma once
#include <Modloader/app/structs/LightDirectionNormalsModifier.h>
#include <Modloader/app/structs/LightDirectionNormalsModifier__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LightDirectionNormalsModifier {
        inline app::LightDirectionNormalsModifier__Class** type_info() {
            static app::LightDirectionNormalsModifier__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LightDirectionNormalsModifier__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LightDirectionNormalsModifier__Class* get_class() {
            return il2cpp::get_class<app::LightDirectionNormalsModifier__Class>(type_info(), "", "LightDirectionNormalsModifier");
        }
        inline app::LightDirectionNormalsModifier* create() {
            return il2cpp::create_object<app::LightDirectionNormalsModifier>(get_class());
        }
    } // namespace LightDirectionNormalsModifier
} // namespace app::classes::types
