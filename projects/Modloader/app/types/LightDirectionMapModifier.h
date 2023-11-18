#pragma once
#include <Modloader/app/structs/LightDirectionMapModifier.h>
#include <Modloader/app/structs/LightDirectionMapModifier__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LightDirectionMapModifier {
        inline app::LightDirectionMapModifier__Class** type_info() {
            static app::LightDirectionMapModifier__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LightDirectionMapModifier__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LightDirectionMapModifier__Class* get_class() {
            return il2cpp::get_class<app::LightDirectionMapModifier__Class>(type_info(), "", "LightDirectionMapModifier");
        }
        inline app::LightDirectionMapModifier* create() {
            return il2cpp::create_object<app::LightDirectionMapModifier>(get_class());
        }
    } // namespace LightDirectionMapModifier
} // namespace app::classes::types
