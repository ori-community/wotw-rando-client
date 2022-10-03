#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SerializedByteUberStateWrapper {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SerializedByteUberStateWrapper__Class** type_info;
        inline app::SerializedByteUberStateWrapper__Class* get_class() {
            return il2cpp::get_class<app::SerializedByteUberStateWrapper__Class>(type_info, "Moon.UberStateVisualization", "SerializedByteUberStateWrapper");
        }
        inline app::SerializedByteUberStateWrapper* create() {
            return il2cpp::create_object<app::SerializedByteUberStateWrapper>(get_class());
        }
    } // namespace SerializedByteUberStateWrapper
} // namespace app::classes::types
