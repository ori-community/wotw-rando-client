#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ISerializationCallbackReceiver {
        inline app::ISerializationCallbackReceiver__Class** type_info = (app::ISerializationCallbackReceiver__Class**)(modloader::win::memory::resolve_rva(0x047349D0));
        inline app::ISerializationCallbackReceiver__Class* get_class() {
            return il2cpp::get_class<app::ISerializationCallbackReceiver__Class>(type_info, "UnityEngine", "ISerializationCallbackReceiver");
        }
    } // namespace ISerializationCallbackReceiver
} // namespace app::classes::types
