#pragma once
#include <Modloader/app/structs/TurbulenceModifier.h>
#include <Modloader/app/structs/TurbulenceModifier__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TurbulenceModifier {
        inline app::TurbulenceModifier__Class** type_info() {
            static app::TurbulenceModifier__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TurbulenceModifier__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TurbulenceModifier__Class* get_class() {
            return il2cpp::get_class<app::TurbulenceModifier__Class>(type_info(), "", "TurbulenceModifier");
        }
        inline app::TurbulenceModifier* create() {
            return il2cpp::create_object<app::TurbulenceModifier>(get_class());
        }
    } // namespace TurbulenceModifier
} // namespace app::classes::types
