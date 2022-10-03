#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace InteractionGraph {
        namespace {
            app::InteractionGraph__Class* type_info_ref = nullptr;
        }
        app::InteractionGraph__Class** type_info = &type_info_ref;
        inline app::InteractionGraph__Class* get_class() {
            return il2cpp::get_class<app::InteractionGraph__Class>(type_info, "Moon.InteractionGraph", "InteractionGraph");
        }
        inline app::InteractionGraph* create() {
            return il2cpp::create_object<app::InteractionGraph>(get_class());
        }
        inline app::InteractionGraph__Array* create_array(int size) {
            return il2cpp::array_new<app::InteractionGraph__Array>(get_class(), size);
        }
    } // namespace InteractionGraph
} // namespace app::classes::types
