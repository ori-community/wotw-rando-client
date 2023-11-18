#pragma once
#include <Modloader/app/structs/Constraint_1__Array.h>
#include <Modloader/app/structs/Constraint_1__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Constraint_1__Array {
        inline app::Constraint_1__Array__Class** type_info() {
            static app::Constraint_1__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Constraint_1__Array__Class**)(modloader::win::memory::resolve_rva(0x047548B0));
            }
            return cache;
        }
        inline app::Constraint_1__Array__Class* get_class() {
            return il2cpp::get_class<app::Constraint_1__Array__Class>(type_info(), "System.Data", "Constraint[]");
        }
        inline app::Constraint_1__Array* create() {
            return il2cpp::create_object<app::Constraint_1__Array>(get_class());
        }
    } // namespace Constraint_1__Array
} // namespace app::classes::types
