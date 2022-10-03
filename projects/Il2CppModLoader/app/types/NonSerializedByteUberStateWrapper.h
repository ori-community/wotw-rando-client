#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace NonSerializedByteUberStateWrapper {
        extern IL2CPP_MODLOADER_DLLEXPORT app::NonSerializedByteUberStateWrapper__Class** type_info;
        inline app::NonSerializedByteUberStateWrapper__Class* get_class() {
            return il2cpp::get_class<app::NonSerializedByteUberStateWrapper__Class>(type_info, "Moon.UberStateVisualization", "NonSerializedByteUberStateWrapper");
        }
        inline app::NonSerializedByteUberStateWrapper* create() {
            return il2cpp::create_object<app::NonSerializedByteUberStateWrapper>(get_class());
        }
    } // namespace NonSerializedByteUberStateWrapper
} // namespace app::classes::types
