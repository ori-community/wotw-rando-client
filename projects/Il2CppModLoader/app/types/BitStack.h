#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace BitStack {
        inline app::BitStack__Class** type_info = (app::BitStack__Class**)(modloader::win::memory::resolve_rva(0x0473FB90));
        inline app::BitStack__Class* get_class() {
            return il2cpp::get_class<app::BitStack__Class>(type_info, "System.Xml", "BitStack");
        }
        inline app::BitStack* create() {
            return il2cpp::create_object<app::BitStack>(get_class());
        }
    } // namespace BitStack
} // namespace app::classes::types
