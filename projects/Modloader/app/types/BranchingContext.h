#pragma once
#include <Modloader/app/structs/BranchingContext.h>
#include <Modloader/app/structs/BranchingContext__Boxed.h>
#include <Modloader/app/structs/BranchingContext__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BranchingContext {
        inline app::BranchingContext__Class** type_info() {
            static app::BranchingContext__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::BranchingContext__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::BranchingContext__Class* get_class() {
            return il2cpp::get_class<app::BranchingContext__Class>(type_info(), "Moon.Timeline", "BranchingContext");
        }
        inline app::BranchingContext* create() {
            return il2cpp::create_object<app::BranchingContext>(get_class());
        }
        inline app::BranchingContext__Boxed* box(app::BranchingContext value) {
            return il2cpp::box_value<app::BranchingContext__Boxed>(get_class(), value);
        }
    } // namespace BranchingContext
} // namespace app::classes::types
