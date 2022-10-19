#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IComponentChangeService {
        inline app::IComponentChangeService__Class** type_info = (app::IComponentChangeService__Class**)(modloader::win::memory::resolve_rva(0x04794258));
        inline app::IComponentChangeService__Class* get_class() {
            return il2cpp::get_class<app::IComponentChangeService__Class>(type_info, "System.ComponentModel.Design", "IComponentChangeService");
        }
    } // namespace IComponentChangeService
} // namespace app::classes::types
