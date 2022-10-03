#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SerializedBoolUberStateWrapper {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SerializedBoolUberStateWrapper__Class** type_info;
        inline app::SerializedBoolUberStateWrapper__Class* get_class() {
            return il2cpp::get_class<app::SerializedBoolUberStateWrapper__Class>(type_info, "Moon.UberStateVisualization", "SerializedBoolUberStateWrapper");
        }
        inline app::SerializedBoolUberStateWrapper* create() {
            return il2cpp::create_object<app::SerializedBoolUberStateWrapper>(get_class());
        }
    } // namespace SerializedBoolUberStateWrapper
} // namespace app::classes::types
