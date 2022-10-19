#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SpiritGrenade {
        inline app::SpiritGrenade__Class** type_info = (app::SpiritGrenade__Class**)(modloader::win::memory::resolve_rva(0x04702068));
        inline app::SpiritGrenade__Class* get_class() {
            return il2cpp::get_class<app::SpiritGrenade__Class>(type_info, "", "SpiritGrenade");
        }
        inline app::SpiritGrenade* create() {
            return il2cpp::create_object<app::SpiritGrenade>(get_class());
        }
    } // namespace SpiritGrenade
} // namespace app::classes::types
