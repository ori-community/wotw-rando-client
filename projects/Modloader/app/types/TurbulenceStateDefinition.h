#pragma once
#include <Modloader/app/structs/TurbulenceStateDefinition.h>
#include <Modloader/app/structs/TurbulenceStateDefinition__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TurbulenceStateDefinition {
        inline app::TurbulenceStateDefinition__Class** type_info() {
            static app::TurbulenceStateDefinition__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TurbulenceStateDefinition__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TurbulenceStateDefinition__Class* get_class() {
            return il2cpp::get_class<app::TurbulenceStateDefinition__Class>(type_info(), "", "TurbulenceStateDefinition");
        }
        inline app::TurbulenceStateDefinition* create() {
            return il2cpp::create_object<app::TurbulenceStateDefinition>(get_class());
        }
    } // namespace TurbulenceStateDefinition
} // namespace app::classes::types
