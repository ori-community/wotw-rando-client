#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ISafeSerializationData {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ISafeSerializationData__Class** type_info;
        inline app::ISafeSerializationData__Class* get_class() {
            return il2cpp::get_class<app::ISafeSerializationData__Class>(type_info, "System.Runtime.Serialization", "ISafeSerializationData");
        }
        inline app::ISafeSerializationData* create() {
            return il2cpp::create_object<app::ISafeSerializationData>(get_class());
        }
    } // namespace ISafeSerializationData
} // namespace app::classes::types
