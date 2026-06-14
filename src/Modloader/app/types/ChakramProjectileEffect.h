#pragma once
#include <Modloader/app/structs/ChakramProjectileEffect.h>
#include <Modloader/app/structs/ChakramProjectileEffect__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ChakramProjectileEffect {
        inline app::ChakramProjectileEffect__Class** type_info() {
            static app::ChakramProjectileEffect__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ChakramProjectileEffect__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ChakramProjectileEffect__Class* get_class() {
            return il2cpp::get_class<app::ChakramProjectileEffect__Class>(type_info(), "", "ChakramProjectileEffect");
        }
        inline app::ChakramProjectileEffect* create() {
            return il2cpp::create_object<app::ChakramProjectileEffect>(get_class());
        }
    } // namespace ChakramProjectileEffect
} // namespace app::classes::types
