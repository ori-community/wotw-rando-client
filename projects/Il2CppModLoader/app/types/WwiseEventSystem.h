#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace WwiseEventSystem {
        inline app::WwiseEventSystem__Class** type_info = (app::WwiseEventSystem__Class**)(modloader::win::memory::resolve_rva(0x04711EB8));
        inline app::WwiseEventSystem__Class* get_class() {
            return il2cpp::get_class<app::WwiseEventSystem__Class>(type_info, "Moon.Wwise", "WwiseEventSystem");
        }
        inline app::WwiseEventSystem* create() {
            return il2cpp::create_object<app::WwiseEventSystem>(get_class());
        }
    } // namespace WwiseEventSystem
} // namespace app::classes::types
