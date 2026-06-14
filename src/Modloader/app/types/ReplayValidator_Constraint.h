#pragma once
#include <Modloader/app/structs/ReplayValidator_Constraint.h>
#include <Modloader/app/structs/ReplayValidator_Constraint__Array.h>
#include <Modloader/app/structs/ReplayValidator_Constraint__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ReplayValidator_Constraint {
        inline app::ReplayValidator_Constraint__Class** type_info() {
            static app::ReplayValidator_Constraint__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ReplayValidator_Constraint__Class**)(modloader::win::memory::resolve_rva(0x04716838));
            }
            return cache;
        }
        inline app::ReplayValidator_Constraint__Class* get_class() {
            return il2cpp::get_nested_class<app::ReplayValidator_Constraint__Class>(type_info(), "Moon.Race", "ReplayValidator", "Constraint");
        }
        inline app::ReplayValidator_Constraint* create() {
            return il2cpp::create_object<app::ReplayValidator_Constraint>(get_class());
        }
        inline app::ReplayValidator_Constraint__Array* create_array(int size) {
            return il2cpp::array_new<app::ReplayValidator_Constraint__Array>(get_class(), size);
        }
        inline app::ReplayValidator_Constraint__Array* create_array(const std::vector<app::ReplayValidator_Constraint*>& items) {
            return il2cpp::array_new<app::ReplayValidator_Constraint__Array>(get_class(), items);
        }
    } // namespace ReplayValidator_Constraint
} // namespace app::classes::types
