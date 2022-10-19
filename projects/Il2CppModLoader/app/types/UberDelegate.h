#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace UberDelegate {
        inline app::UberDelegate__Class** type_info = (app::UberDelegate__Class**)(modloader::win::memory::resolve_rva(0x0474B478));
        inline app::UberDelegate__Class* get_class() {
            return il2cpp::get_class<app::UberDelegate__Class>(type_info, "", "UberDelegate");
        }
        inline app::UberDelegate* create() {
            return il2cpp::create_object<app::UberDelegate>(get_class());
        }
    } // namespace UberDelegate
} // namespace app::classes::types
