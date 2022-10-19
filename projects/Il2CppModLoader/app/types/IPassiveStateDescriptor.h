#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IPassiveStateDescriptor {
        inline app::IPassiveStateDescriptor__Class** type_info = (app::IPassiveStateDescriptor__Class**)(modloader::win::memory::resolve_rva(0x04786258));
        inline app::IPassiveStateDescriptor__Class* get_class() {
            return il2cpp::get_class<app::IPassiveStateDescriptor__Class>(type_info, "", "IPassiveStateDescriptor");
        }
    } // namespace IPassiveStateDescriptor
} // namespace app::classes::types
