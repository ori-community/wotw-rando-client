#pragma once
#include <Modloader/app/structs/BranchLabel__Array.h>
#include <Modloader/app/structs/BranchLabel__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BranchLabel__Array {
        inline app::BranchLabel__Array__Class** type_info() {
            static app::BranchLabel__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::BranchLabel__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::BranchLabel__Array__Class* get_class() {
            return il2cpp::get_class<app::BranchLabel__Array__Class>(type_info(), "System.Linq.Expressions.Interpreter", "BranchLabel[]");
        }
        inline app::BranchLabel__Array* create() {
            return il2cpp::create_object<app::BranchLabel__Array>(get_class());
        }
    } // namespace BranchLabel__Array
} // namespace app::classes::types
