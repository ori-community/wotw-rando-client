#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IBouncealbeFromCartBouncer {
        inline app::IBouncealbeFromCartBouncer__Class** type_info = (app::IBouncealbeFromCartBouncer__Class**)(modloader::win::memory::resolve_rva(0x0473DA80));
        inline app::IBouncealbeFromCartBouncer__Class* get_class() {
            return il2cpp::get_class<app::IBouncealbeFromCartBouncer__Class>(type_info, "", "IBouncealbeFromCartBouncer");
        }
    } // namespace IBouncealbeFromCartBouncer
} // namespace app::classes::types
