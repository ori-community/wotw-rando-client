#pragma once
#include <Modloader/app/structs/PhysicalSystemStateModifier.h>
#include <Modloader/app/structs/PhysicalSystemStateModifier__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PhysicalSystemStateModifier {
        inline app::PhysicalSystemStateModifier__Class** type_info() {
            static app::PhysicalSystemStateModifier__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PhysicalSystemStateModifier__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PhysicalSystemStateModifier__Class* get_class() {
            return il2cpp::get_class<app::PhysicalSystemStateModifier__Class>(type_info(), "", "PhysicalSystemStateModifier");
        }
        inline app::PhysicalSystemStateModifier* create() {
            return il2cpp::create_object<app::PhysicalSystemStateModifier>(get_class());
        }
    } // namespace PhysicalSystemStateModifier
} // namespace app::classes::types
