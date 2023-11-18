#pragma once
#include <Modloader/app/structs/Turret_Part__Array.h>
#include <Modloader/app/structs/Turret_Part__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Turret_Part__Array {
        inline app::Turret_Part__Array__Class** type_info() {
            static app::Turret_Part__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Turret_Part__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Turret_Part__Array__Class* get_class() {
            return il2cpp::get_class<app::Turret_Part__Array__Class>(type_info(), "RootMotion.Demos", "Turret+Part[]");
        }
        inline app::Turret_Part__Array* create() {
            return il2cpp::create_object<app::Turret_Part__Array>(get_class());
        }
    } // namespace Turret_Part__Array
} // namespace app::classes::types
