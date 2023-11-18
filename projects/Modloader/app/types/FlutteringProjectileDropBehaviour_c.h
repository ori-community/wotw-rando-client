#pragma once
#include <Modloader/app/structs/FlutteringProjectileDropBehaviour_c.h>
#include <Modloader/app/structs/FlutteringProjectileDropBehaviour_c__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FlutteringProjectileDropBehaviour_c {
        inline app::FlutteringProjectileDropBehaviour_c__Class** type_info() {
            static app::FlutteringProjectileDropBehaviour_c__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::FlutteringProjectileDropBehaviour_c__Class**)(modloader::win::memory::resolve_rva(0x0472DB10));
            }
            return cache;
        }
        inline app::FlutteringProjectileDropBehaviour_c__Class* get_class() {
            return il2cpp::get_nested_class<app::FlutteringProjectileDropBehaviour_c__Class>(type_info(), "Moon", "FlutteringProjectileDropBehaviour", "<>c");
        }
        inline app::FlutteringProjectileDropBehaviour_c* create() {
            return il2cpp::create_object<app::FlutteringProjectileDropBehaviour_c>(get_class());
        }
    } // namespace FlutteringProjectileDropBehaviour_c
} // namespace app::classes::types
