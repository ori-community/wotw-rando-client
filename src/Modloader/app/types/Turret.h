#pragma once
#include <Modloader/app/structs/Turret.h>
#include <Modloader/app/structs/Turret__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Turret {
        inline app::Turret__Class** type_info() {
            static app::Turret__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Turret__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Turret__Class* get_class() {
            return il2cpp::get_class<app::Turret__Class>(type_info(), "RootMotion.Demos", "Turret");
        }
        inline app::Turret* create() {
            return il2cpp::create_object<app::Turret>(get_class());
        }
    } // namespace Turret
} // namespace app::classes::types
