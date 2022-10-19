#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IDamageNotifier {
        inline app::IDamageNotifier__Class** type_info = (app::IDamageNotifier__Class**)(modloader::win::memory::resolve_rva(0x04773640));
        inline app::IDamageNotifier__Class* get_class() {
            return il2cpp::get_class<app::IDamageNotifier__Class>(type_info, "", "IDamageNotifier");
        }
    } // namespace IDamageNotifier
} // namespace app::classes::types
