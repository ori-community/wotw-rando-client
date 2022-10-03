#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SerializedIntUberStateWrapper {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SerializedIntUberStateWrapper__Class** type_info;
        inline app::SerializedIntUberStateWrapper__Class* get_class() {
            return il2cpp::get_class<app::SerializedIntUberStateWrapper__Class>(type_info, "Moon.UberStateVisualization", "SerializedIntUberStateWrapper");
        }
        inline app::SerializedIntUberStateWrapper* create() {
            return il2cpp::create_object<app::SerializedIntUberStateWrapper>(get_class());
        }
    } // namespace SerializedIntUberStateWrapper
} // namespace app::classes::types
