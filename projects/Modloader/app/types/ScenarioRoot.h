#pragma once
#include <Modloader/app/structs/ScenarioRoot.h>
#include <Modloader/app/structs/ScenarioRoot__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ScenarioRoot {
        inline app::ScenarioRoot__Class** type_info() {
            static app::ScenarioRoot__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ScenarioRoot__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ScenarioRoot__Class* get_class() {
            return il2cpp::get_class<app::ScenarioRoot__Class>(type_info(), "", "ScenarioRoot");
        }
        inline app::ScenarioRoot* create() {
            return il2cpp::create_object<app::ScenarioRoot>(get_class());
        }
    } // namespace ScenarioRoot
} // namespace app::classes::types
