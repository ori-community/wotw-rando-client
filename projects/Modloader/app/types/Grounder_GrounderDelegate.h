#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace Grounder_GrounderDelegate {
        namespace {
            inline app::Grounder_GrounderDelegate__Class* type_info_ref = nullptr;
        }
        inline app::Grounder_GrounderDelegate__Class** type_info = &type_info_ref;
        inline app::Grounder_GrounderDelegate__Class* get_class() {
            return il2cpp::get_nested_class<app::Grounder_GrounderDelegate__Class>(type_info, "RootMotion.FinalIK", "Grounder", "GrounderDelegate");
        }
        inline app::Grounder_GrounderDelegate* create() {
            return il2cpp::create_object<app::Grounder_GrounderDelegate>(get_class());
        }
    } // namespace Grounder_GrounderDelegate
} // namespace app::classes::types
