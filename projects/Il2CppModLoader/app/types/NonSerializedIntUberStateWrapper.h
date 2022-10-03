#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace NonSerializedIntUberStateWrapper {
        extern IL2CPP_MODLOADER_DLLEXPORT app::NonSerializedIntUberStateWrapper__Class** type_info;
        inline app::NonSerializedIntUberStateWrapper__Class* get_class() {
            return il2cpp::get_class<app::NonSerializedIntUberStateWrapper__Class>(type_info, "Moon.UberStateVisualization", "NonSerializedIntUberStateWrapper");
        }
        inline app::NonSerializedIntUberStateWrapper* create() {
            return il2cpp::create_object<app::NonSerializedIntUberStateWrapper>(get_class());
        }
    } // namespace NonSerializedIntUberStateWrapper
} // namespace app::classes::types
