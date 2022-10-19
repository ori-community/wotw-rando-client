#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SeinStomp {
        inline app::SeinStomp__Class** type_info = (app::SeinStomp__Class**)(modloader::win::memory::resolve_rva(0x04760A40));
        inline app::SeinStomp__Class* get_class() {
            return il2cpp::get_class<app::SeinStomp__Class>(type_info, "", "SeinStomp");
        }
        inline app::SeinStomp* create() {
            return il2cpp::create_object<app::SeinStomp>(get_class());
        }
    } // namespace SeinStomp
} // namespace app::classes::types
