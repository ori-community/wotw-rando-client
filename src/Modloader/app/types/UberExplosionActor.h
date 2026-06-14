#pragma once
#include <Modloader/app/structs/UberExplosionActor.h>
#include <Modloader/app/structs/UberExplosionActor__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberExplosionActor {
        inline app::UberExplosionActor__Class** type_info() {
            static app::UberExplosionActor__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UberExplosionActor__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UberExplosionActor__Class* get_class() {
            return il2cpp::get_class<app::UberExplosionActor__Class>(type_info(), "", "UberExplosionActor");
        }
        inline app::UberExplosionActor* create() {
            return il2cpp::create_object<app::UberExplosionActor>(get_class());
        }
    } // namespace UberExplosionActor
} // namespace app::classes::types
