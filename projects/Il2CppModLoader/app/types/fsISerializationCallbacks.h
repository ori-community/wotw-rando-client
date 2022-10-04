#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace fsISerializationCallbacks {
        extern IL2CPP_MODLOADER_DLLEXPORT app::fsISerializationCallbacks__Class** type_info;
        inline app::fsISerializationCallbacks__Class* get_class() {
            return il2cpp::get_class<app::fsISerializationCallbacks__Class>(type_info, "FullSerializer", "fsISerializationCallbacks");
        }
    } // namespace fsISerializationCallbacks
} // namespace app::classes::types
