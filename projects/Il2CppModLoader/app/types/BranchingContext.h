#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BranchingContext {
        namespace {
            app::BranchingContext__Class* type_info_ref = nullptr;
        }
        app::BranchingContext__Class** type_info = &type_info_ref;
        inline app::BranchingContext__Class* get_class() {
            return il2cpp::get_class<app::BranchingContext__Class>(type_info, "Moon.Timeline", "BranchingContext");
        }
        inline app::BranchingContext* create() {
            return il2cpp::create_object<app::BranchingContext>(get_class());
        }
        inline app::BranchingContext__Boxed* box(app::BranchingContext value) {
            return il2cpp::box_value<app::BranchingContext__Boxed>(get_class(), value);
        }
    } // namespace BranchingContext
} // namespace app::classes::types
