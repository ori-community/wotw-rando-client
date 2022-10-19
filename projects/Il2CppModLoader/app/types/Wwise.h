#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace Wwise {
        inline app::Wwise__Class** type_info = (app::Wwise__Class**)(modloader::win::memory::resolve_rva(0x04776290));
        inline app::Wwise__Class* get_class() {
            return il2cpp::get_class<app::Wwise__Class>(type_info, "Moon.Wwise", "Wwise");
        }
        inline app::Wwise* create() {
            return il2cpp::create_object<app::Wwise>(get_class());
        }
    } // namespace Wwise
} // namespace app::classes::types
