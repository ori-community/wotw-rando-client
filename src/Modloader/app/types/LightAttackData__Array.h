#pragma once
#include <Modloader/app/structs/LightAttackData__Array.h>
#include <Modloader/app/structs/LightAttackData__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LightAttackData__Array {
        inline app::LightAttackData__Array__Class** type_info() {
            static app::LightAttackData__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LightAttackData__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LightAttackData__Array__Class* get_class() {
            return il2cpp::get_class<app::LightAttackData__Array__Class>(type_info(), "", "LightAttackData[]");
        }
        inline app::LightAttackData__Array* create() {
            return il2cpp::create_object<app::LightAttackData__Array>(get_class());
        }
    } // namespace LightAttackData__Array
} // namespace app::classes::types
