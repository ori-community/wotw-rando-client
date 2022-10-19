#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace FixedRandom {
        inline app::FixedRandom__Class** type_info = (app::FixedRandom__Class**)(modloader::win::memory::resolve_rva(0x04777500));
        inline app::FixedRandom__Class* get_class() {
            return il2cpp::get_class<app::FixedRandom__Class>(type_info, "", "FixedRandom");
        }
        inline app::FixedRandom* create() {
            return il2cpp::create_object<app::FixedRandom>(get_class());
        }
    } // namespace FixedRandom
} // namespace app::classes::types
