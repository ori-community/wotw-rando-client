#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ProviderData {
        inline app::ProviderData__Class** type_info = (app::ProviderData__Class**)(modloader::win::memory::resolve_rva(0x0478F0A0));
        inline app::ProviderData__Class* get_class() {
            return il2cpp::get_class<app::ProviderData__Class>(type_info, "System.Runtime.Remoting", "ProviderData");
        }
        inline app::ProviderData* create() {
            return il2cpp::create_object<app::ProviderData>(get_class());
        }
    } // namespace ProviderData
} // namespace app::classes::types
