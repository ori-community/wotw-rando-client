#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace PathFollowerVariedSpeed {
        inline app::PathFollowerVariedSpeed__Class** type_info = (app::PathFollowerVariedSpeed__Class**)(modloader::win::memory::resolve_rva(0x0474A8E0));
        inline app::PathFollowerVariedSpeed__Class* get_class() {
            return il2cpp::get_class<app::PathFollowerVariedSpeed__Class>(type_info, "", "PathFollowerVariedSpeed");
        }
        inline app::PathFollowerVariedSpeed* create() {
            return il2cpp::create_object<app::PathFollowerVariedSpeed>(get_class());
        }
    } // namespace PathFollowerVariedSpeed
} // namespace app::classes::types
