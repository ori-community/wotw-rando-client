#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace OriJumpPuppet {
        inline app::OriJumpPuppet__Class** type_info = (app::OriJumpPuppet__Class**)(modloader::win::memory::resolve_rva(0x0476C610));
        inline app::OriJumpPuppet__Class* get_class() {
            return il2cpp::get_class<app::OriJumpPuppet__Class>(type_info, "", "OriJumpPuppet");
        }
        inline app::OriJumpPuppet* create() {
            return il2cpp::create_object<app::OriJumpPuppet>(get_class());
        }
    } // namespace OriJumpPuppet
} // namespace app::classes::types
