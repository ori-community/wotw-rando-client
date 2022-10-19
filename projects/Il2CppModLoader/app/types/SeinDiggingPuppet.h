#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SeinDiggingPuppet {
        inline app::SeinDiggingPuppet__Class** type_info = (app::SeinDiggingPuppet__Class**)(modloader::win::memory::resolve_rva(0x04780A80));
        inline app::SeinDiggingPuppet__Class* get_class() {
            return il2cpp::get_class<app::SeinDiggingPuppet__Class>(type_info, "", "SeinDiggingPuppet");
        }
        inline app::SeinDiggingPuppet* create() {
            return il2cpp::create_object<app::SeinDiggingPuppet>(get_class());
        }
    } // namespace SeinDiggingPuppet
} // namespace app::classes::types
