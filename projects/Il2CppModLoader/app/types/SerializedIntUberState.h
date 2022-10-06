#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SerializedIntUberState {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SerializedIntUberState__Class** type_info;
        inline app::SerializedIntUberState__Class* get_class() {
            return il2cpp::get_class<app::SerializedIntUberState__Class>(type_info, "Moon", "SerializedIntUberState");
        }
        inline app::SerializedIntUberState* create() {
            return il2cpp::create_object<app::SerializedIntUberState>(get_class());
        }
        inline app::SerializedIntUberState__Array* create_array(int size) {
            return il2cpp::array_new<app::SerializedIntUberState__Array>(get_class(), size);
        }
        inline app::SerializedIntUberState__Array* create_array(const std::vector<app::SerializedIntUberState*>& items) {
            return il2cpp::array_new<app::SerializedIntUberState__Array>(get_class(), items);
        }
    } // namespace SerializedIntUberState
} // namespace app::classes::types
