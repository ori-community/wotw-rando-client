#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Ambience_Layer_Track__Array {
        namespace {
            app::Ambience_Layer_Track__Array__Class* type_info_ref = nullptr;
        }
        app::Ambience_Layer_Track__Array__Class** type_info = &type_info_ref;
        inline app::Ambience_Layer_Track__Array__Class* get_class() {
            return il2cpp::get_class<app::Ambience_Layer_Track__Array__Class>(type_info, "Core", "Ambience+Layer+Track[]");
        }
        inline app::Ambience_Layer_Track__Array* create() {
            return il2cpp::create_object<app::Ambience_Layer_Track__Array>(get_class());
        }
    } // namespace Ambience_Layer_Track__Array
} // namespace app::classes::types
