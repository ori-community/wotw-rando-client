#pragma once
#include <Modloader/app/structs/SandTrailModifier.h>
#include <Modloader/app/structs/SandTrailModifier__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SandTrailModifier {
        inline app::SandTrailModifier__Class** type_info() {
            static app::SandTrailModifier__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SandTrailModifier__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SandTrailModifier__Class* get_class() {
            return il2cpp::get_class<app::SandTrailModifier__Class>(type_info(), "", "SandTrailModifier");
        }
        inline app::SandTrailModifier* create() {
            return il2cpp::create_object<app::SandTrailModifier>(get_class());
        }
    } // namespace SandTrailModifier
} // namespace app::classes::types
