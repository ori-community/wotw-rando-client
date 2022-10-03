#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Ambience_Layer {
        namespace {
            app::Ambience_Layer__Class* type_info_ref = nullptr;
        }
        app::Ambience_Layer__Class** type_info = &type_info_ref;
        inline app::Ambience_Layer__Class* get_class() {
            return il2cpp::get_nested_class<app::Ambience_Layer__Class>(type_info, "Core", "Ambience", "Layer");
        }
        inline app::Ambience_Layer* create() {
            return il2cpp::create_object<app::Ambience_Layer>(get_class());
        }
        inline app::Ambience_Layer__Array* create_array(int size) {
            return il2cpp::array_new<app::Ambience_Layer__Array>(get_class(), size);
        }
    } // namespace Ambience_Layer
} // namespace app::classes::types
