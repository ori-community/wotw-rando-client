#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SeinRidePuppet {
        inline app::SeinRidePuppet__Class** type_info = (app::SeinRidePuppet__Class**)(modloader::win::memory::resolve_rva(0x04791080));
        inline app::SeinRidePuppet__Class* get_class() {
            return il2cpp::get_class<app::SeinRidePuppet__Class>(type_info, "", "SeinRidePuppet");
        }
        inline app::SeinRidePuppet* create() {
            return il2cpp::create_object<app::SeinRidePuppet>(get_class());
        }
    } // namespace SeinRidePuppet
} // namespace app::classes::types
