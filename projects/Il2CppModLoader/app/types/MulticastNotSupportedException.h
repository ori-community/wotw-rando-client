#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace MulticastNotSupportedException {
        inline app::MulticastNotSupportedException__Class** type_info = (app::MulticastNotSupportedException__Class**)(modloader::win::memory::resolve_rva(0x04750AA0));
        inline app::MulticastNotSupportedException__Class* get_class() {
            return il2cpp::get_class<app::MulticastNotSupportedException__Class>(type_info, "System", "MulticastNotSupportedException");
        }
        inline app::MulticastNotSupportedException* create() {
            return il2cpp::create_object<app::MulticastNotSupportedException>(get_class());
        }
    } // namespace MulticastNotSupportedException
} // namespace app::classes::types
