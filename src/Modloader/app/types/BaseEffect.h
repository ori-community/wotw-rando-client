#pragma once
#include <Modloader/app/structs/BaseEffect.h>
#include <Modloader/app/structs/BaseEffect__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BaseEffect {
        inline app::BaseEffect__Class** type_info() {
            static app::BaseEffect__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::BaseEffect__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::BaseEffect__Class* get_class() {
            return il2cpp::get_class<app::BaseEffect__Class>(type_info(), "Colorful", "BaseEffect");
        }
        inline app::BaseEffect* create() {
            return il2cpp::create_object<app::BaseEffect>(get_class());
        }
    } // namespace BaseEffect
} // namespace app::classes::types
