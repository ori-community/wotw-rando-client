#pragma once
#include <Modloader/app/structs/LightSpear.h>
#include <Modloader/app/structs/LightSpear__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LightSpear {
        inline app::LightSpear__Class** type_info() {
            static app::LightSpear__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LightSpear__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LightSpear__Class* get_class() {
            return il2cpp::get_class<app::LightSpear__Class>(type_info(), "", "LightSpear");
        }
        inline app::LightSpear* create() {
            return il2cpp::create_object<app::LightSpear>(get_class());
        }
    } // namespace LightSpear
} // namespace app::classes::types
