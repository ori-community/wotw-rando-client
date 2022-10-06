#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IConstraint {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IConstraint__Class** type_info;
        inline app::IConstraint__Class* get_class() {
            return il2cpp::get_class<app::IConstraint__Class>(type_info, "Moon.Timeline.Constraints", "IConstraint");
        }
        inline app::IConstraint__Array* create_array(int size) {
            return il2cpp::array_new<app::IConstraint__Array>(get_class(), size);
        }
        inline app::IConstraint__Array* create_array(const std::vector<app::IConstraint*>& items) {
            return il2cpp::array_new<app::IConstraint__Array>(get_class(), items);
        }
    } // namespace IConstraint
} // namespace app::classes::types
