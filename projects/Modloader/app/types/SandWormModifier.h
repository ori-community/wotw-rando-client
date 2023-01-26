#pragma once
#include <Modloader/app/structs/SandWormModifier.h>
#include <Modloader/app/structs/SandWormModifier__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SandWormModifier {
        inline app::SandWormModifier__Class** type_info() {
            static app::SandWormModifier__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SandWormModifier__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SandWormModifier__Class* get_class() {
            return il2cpp::get_class<app::SandWormModifier__Class>(type_info(), "", "SandWormModifier");
        }
        inline app::SandWormModifier* create() {
            return il2cpp::create_object<app::SandWormModifier>(get_class());
        }
    } // namespace SandWormModifier
} // namespace app::classes::types
