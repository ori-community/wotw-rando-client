#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace InteractionTarget {
        namespace {
            app::InteractionTarget__Class* type_info_ref = nullptr;
        }
        app::InteractionTarget__Class** type_info = &type_info_ref;
        inline app::InteractionTarget__Class* get_class() {
            return il2cpp::get_class<app::InteractionTarget__Class>(type_info, "RootMotion.FinalIK", "InteractionTarget");
        }
        inline app::InteractionTarget* create() {
            return il2cpp::create_object<app::InteractionTarget>(get_class());
        }
        inline app::InteractionTarget__Array* create_array(int size) {
            return il2cpp::array_new<app::InteractionTarget__Array>(get_class(), size);
        }
        inline app::InteractionTarget__Array* create_array(const std::vector<app::InteractionTarget*>& items) {
            return il2cpp::array_new<app::InteractionTarget__Array>(get_class(), items);
        }
    } // namespace InteractionTarget
} // namespace app::classes::types
