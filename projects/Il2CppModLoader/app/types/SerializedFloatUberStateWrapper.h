#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SerializedFloatUberStateWrapper {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SerializedFloatUberStateWrapper__Class** type_info;
        inline app::SerializedFloatUberStateWrapper__Class* get_class() {
            return il2cpp::get_class<app::SerializedFloatUberStateWrapper__Class>(type_info, "Moon.UberStateVisualization", "SerializedFloatUberStateWrapper");
        }
        inline app::SerializedFloatUberStateWrapper* create() {
            return il2cpp::create_object<app::SerializedFloatUberStateWrapper>(get_class());
        }
    } // namespace SerializedFloatUberStateWrapper
} // namespace app::classes::types
