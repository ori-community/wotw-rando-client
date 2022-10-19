#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SkeetoHitReaction {
        inline app::SkeetoHitReaction__Class** type_info = (app::SkeetoHitReaction__Class**)(modloader::win::memory::resolve_rva(0x0470D458));
        inline app::SkeetoHitReaction__Class* get_class() {
            return il2cpp::get_class<app::SkeetoHitReaction__Class>(type_info, "", "SkeetoHitReaction");
        }
        inline app::SkeetoHitReaction* create() {
            return il2cpp::create_object<app::SkeetoHitReaction>(get_class());
        }
    } // namespace SkeetoHitReaction
} // namespace app::classes::types
