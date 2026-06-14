#pragma once
#include <Modloader/app/structs/SplineAgent.h>
#include <Modloader/app/structs/SplineAgent__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SplineAgent {
        inline app::SplineAgent__Class** type_info() {
            static app::SplineAgent__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SplineAgent__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SplineAgent__Class* get_class() {
            return il2cpp::get_class<app::SplineAgent__Class>(type_info(), "", "SplineAgent");
        }
        inline app::SplineAgent* create() {
            return il2cpp::create_object<app::SplineAgent>(get_class());
        }
    } // namespace SplineAgent
} // namespace app::classes::types
