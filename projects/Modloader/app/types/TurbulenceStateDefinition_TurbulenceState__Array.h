#pragma once
#include <Modloader/app/structs/TurbulenceStateDefinition_TurbulenceState__Array.h>
#include <Modloader/app/structs/TurbulenceStateDefinition_TurbulenceState__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TurbulenceStateDefinition_TurbulenceState__Array {
        inline app::TurbulenceStateDefinition_TurbulenceState__Array__Class** type_info() {
            static app::TurbulenceStateDefinition_TurbulenceState__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TurbulenceStateDefinition_TurbulenceState__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TurbulenceStateDefinition_TurbulenceState__Array__Class* get_class() {
            return il2cpp::get_class<app::TurbulenceStateDefinition_TurbulenceState__Array__Class>(type_info(), "", "TurbulenceStateDefinition+TurbulenceState[]");
        }
        inline app::TurbulenceStateDefinition_TurbulenceState__Array* create() {
            return il2cpp::create_object<app::TurbulenceStateDefinition_TurbulenceState__Array>(get_class());
        }
    } // namespace TurbulenceStateDefinition_TurbulenceState__Array
} // namespace app::classes::types
