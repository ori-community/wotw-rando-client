#pragma once
#include <Modloader/app/structs/GasballExplosionBehaviour.h>
#include <Modloader/app/structs/GasballExplosionBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GasballExplosionBehaviour {
        inline app::GasballExplosionBehaviour__Class** type_info() {
            static app::GasballExplosionBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GasballExplosionBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GasballExplosionBehaviour__Class* get_class() {
            return il2cpp::get_class<app::GasballExplosionBehaviour__Class>(type_info(), "", "GasballExplosionBehaviour");
        }
        inline app::GasballExplosionBehaviour* create() {
            return il2cpp::create_object<app::GasballExplosionBehaviour>(get_class());
        }
    } // namespace GasballExplosionBehaviour
} // namespace app::classes::types
