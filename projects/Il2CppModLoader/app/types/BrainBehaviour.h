#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BrainBehaviour {
        namespace {
            app::BrainBehaviour__Class* type_info_ref = nullptr;
        }
        app::BrainBehaviour__Class** type_info = &type_info_ref;
        inline app::BrainBehaviour__Class* get_class() {
            return il2cpp::get_class<app::BrainBehaviour__Class>(type_info, "Moon", "BrainBehaviour");
        }
        inline app::BrainBehaviour* create() {
            return il2cpp::create_object<app::BrainBehaviour>(get_class());
        }
        inline app::BrainBehaviour__Array* create_array(int size) {
            return il2cpp::array_new<app::BrainBehaviour__Array>(get_class(), size);
        }
        inline app::BrainBehaviour__Array* create_array(const std::vector<app::BrainBehaviour*>& items) {
            return il2cpp::array_new<app::BrainBehaviour__Array>(get_class(), items);
        }
    } // namespace BrainBehaviour
} // namespace app::classes::types
