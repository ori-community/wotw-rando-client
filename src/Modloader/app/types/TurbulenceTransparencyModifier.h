#pragma once
#include <Modloader/app/structs/TurbulenceTransparencyModifier.h>
#include <Modloader/app/structs/TurbulenceTransparencyModifier__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TurbulenceTransparencyModifier {
        inline app::TurbulenceTransparencyModifier__Class** type_info() {
            static app::TurbulenceTransparencyModifier__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TurbulenceTransparencyModifier__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TurbulenceTransparencyModifier__Class* get_class() {
            return il2cpp::get_class<app::TurbulenceTransparencyModifier__Class>(type_info(), "", "TurbulenceTransparencyModifier");
        }
        inline app::TurbulenceTransparencyModifier* create() {
            return il2cpp::create_object<app::TurbulenceTransparencyModifier>(get_class());
        }
    } // namespace TurbulenceTransparencyModifier
} // namespace app::classes::types
