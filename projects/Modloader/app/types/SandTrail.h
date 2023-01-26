#pragma once
#include <Modloader/app/structs/SandTrail.h>
#include <Modloader/app/structs/SandTrail__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SandTrail {
        inline app::SandTrail__Class** type_info() {
            static app::SandTrail__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SandTrail__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SandTrail__Class* get_class() {
            return il2cpp::get_class<app::SandTrail__Class>(type_info(), "Moon", "SandTrail");
        }
        inline app::SandTrail* create() {
            return il2cpp::create_object<app::SandTrail>(get_class());
        }
    } // namespace SandTrail
} // namespace app::classes::types
