#pragma once
#include <Modloader/app/structs/VerletStructureStateModifier.h>
#include <Modloader/app/structs/VerletStructureStateModifier__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace VerletStructureStateModifier {
        inline app::VerletStructureStateModifier__Class** type_info() {
            static app::VerletStructureStateModifier__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::VerletStructureStateModifier__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::VerletStructureStateModifier__Class* get_class() {
            return il2cpp::get_class<app::VerletStructureStateModifier__Class>(type_info(), "", "VerletStructureStateModifier");
        }
        inline app::VerletStructureStateModifier* create() {
            return il2cpp::create_object<app::VerletStructureStateModifier>(get_class());
        }
    } // namespace VerletStructureStateModifier
} // namespace app::classes::types
