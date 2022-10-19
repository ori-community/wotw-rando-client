#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace fsISerializationCallbacks {
        inline app::fsISerializationCallbacks__Class** type_info = (app::fsISerializationCallbacks__Class**)(modloader::win::memory::resolve_rva(0x047555D0));
        inline app::fsISerializationCallbacks__Class* get_class() {
            return il2cpp::get_class<app::fsISerializationCallbacks__Class>(type_info, "FullSerializer", "fsISerializationCallbacks");
        }
    } // namespace fsISerializationCallbacks
} // namespace app::classes::types
