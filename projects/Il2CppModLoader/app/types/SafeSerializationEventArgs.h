#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SafeSerializationEventArgs {
        inline app::SafeSerializationEventArgs__Class** type_info = (app::SafeSerializationEventArgs__Class**)(modloader::win::memory::resolve_rva(0x0475EBC0));
        inline app::SafeSerializationEventArgs__Class* get_class() {
            return il2cpp::get_class<app::SafeSerializationEventArgs__Class>(type_info, "System.Runtime.Serialization", "SafeSerializationEventArgs");
        }
        inline app::SafeSerializationEventArgs* create() {
            return il2cpp::create_object<app::SafeSerializationEventArgs>(get_class());
        }
    } // namespace SafeSerializationEventArgs
} // namespace app::classes::types
