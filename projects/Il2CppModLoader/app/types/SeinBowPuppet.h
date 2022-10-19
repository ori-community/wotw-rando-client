#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SeinBowPuppet {
        inline app::SeinBowPuppet__Class** type_info = (app::SeinBowPuppet__Class**)(modloader::win::memory::resolve_rva(0x04708E98));
        inline app::SeinBowPuppet__Class* get_class() {
            return il2cpp::get_class<app::SeinBowPuppet__Class>(type_info, "", "SeinBowPuppet");
        }
        inline app::SeinBowPuppet* create() {
            return il2cpp::create_object<app::SeinBowPuppet>(get_class());
        }
    } // namespace SeinBowPuppet
} // namespace app::classes::types
