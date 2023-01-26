#pragma once
#include <Modloader/app/structs/FlutteringProjectileDropBehaviour.h>
#include <Modloader/app/structs/FlutteringProjectileDropBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FlutteringProjectileDropBehaviour {
        inline app::FlutteringProjectileDropBehaviour__Class** type_info() {
            static app::FlutteringProjectileDropBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::FlutteringProjectileDropBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::FlutteringProjectileDropBehaviour__Class* get_class() {
            return il2cpp::get_class<app::FlutteringProjectileDropBehaviour__Class>(type_info(), "Moon", "FlutteringProjectileDropBehaviour");
        }
        inline app::FlutteringProjectileDropBehaviour* create() {
            return il2cpp::create_object<app::FlutteringProjectileDropBehaviour>(get_class());
        }
    } // namespace FlutteringProjectileDropBehaviour
} // namespace app::classes::types
