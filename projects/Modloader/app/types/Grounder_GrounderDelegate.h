#pragma once
#include <Modloader/app/structs/Grounder_GrounderDelegate.h>
#include <Modloader/app/structs/Grounder_GrounderDelegate__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Grounder_GrounderDelegate {
        inline app::Grounder_GrounderDelegate__Class** type_info() {
            static app::Grounder_GrounderDelegate__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Grounder_GrounderDelegate__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Grounder_GrounderDelegate__Class* get_class() {
            return il2cpp::get_nested_class<app::Grounder_GrounderDelegate__Class>(type_info(), "RootMotion.FinalIK", "Grounder", "GrounderDelegate");
        }
        inline app::Grounder_GrounderDelegate* create() {
            return il2cpp::create_object<app::Grounder_GrounderDelegate>(get_class());
        }
    } // namespace Grounder_GrounderDelegate
} // namespace app::classes::types
