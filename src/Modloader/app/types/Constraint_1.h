#pragma once
#include <Modloader/app/structs/Constraint_1.h>
#include <Modloader/app/structs/Constraint_1__Array.h>
#include <Modloader/app/structs/Constraint_1__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Constraint_1 {
        inline app::Constraint_1__Class** type_info() {
            static app::Constraint_1__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Constraint_1__Class**)(modloader::win::memory::resolve_rva(0x04770B40));
            }
            return cache;
        }
        inline app::Constraint_1__Class* get_class() {
            return il2cpp::get_class<app::Constraint_1__Class>(type_info(), "System.Data", "Constraint");
        }
        inline app::Constraint_1* create() {
            return il2cpp::create_object<app::Constraint_1>(get_class());
        }
        inline app::Constraint_1__Array* create_array(int size) {
            return il2cpp::array_new<app::Constraint_1__Array>(get_class(), size);
        }
        inline app::Constraint_1__Array* create_array(const std::vector<app::Constraint_1*>& items) {
            return il2cpp::array_new<app::Constraint_1__Array>(get_class(), items);
        }
    } // namespace Constraint_1
} // namespace app::classes::types
