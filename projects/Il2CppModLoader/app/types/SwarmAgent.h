#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SwarmAgent {
        namespace {
            app::SwarmAgent__Class* type_info_ref = nullptr;
        }
        app::SwarmAgent__Class** type_info = &type_info_ref;
        inline app::SwarmAgent__Class* get_class() {
            return il2cpp::get_class<app::SwarmAgent__Class>(type_info, "", "SwarmAgent");
        }
        inline app::SwarmAgent* create() {
            return il2cpp::create_object<app::SwarmAgent>(get_class());
        }
        inline app::SwarmAgent__Array* create_array(int size) {
            return il2cpp::array_new<app::SwarmAgent__Array>(get_class(), size);
        }
    } // namespace SwarmAgent
} // namespace app::classes::types
