#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SafeSerializationEventArgs {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SafeSerializationEventArgs__Class** type_info;
        inline app::SafeSerializationEventArgs__Class* get_class() {
            return il2cpp::get_class<app::SafeSerializationEventArgs__Class>(type_info, "System.Runtime.Serialization", "SafeSerializationEventArgs");
        }
        inline app::SafeSerializationEventArgs* create() {
            return il2cpp::create_object<app::SafeSerializationEventArgs>(get_class());
        }
    } // namespace SafeSerializationEventArgs
} // namespace app::classes::types
