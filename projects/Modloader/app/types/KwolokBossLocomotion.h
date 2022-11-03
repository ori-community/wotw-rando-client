#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace KwolokBossLocomotion {
        inline app::KwolokBossLocomotion__Class** type_info = (app::KwolokBossLocomotion__Class**)(modloader::win::memory::resolve_rva(0x04748FC8));
        inline app::KwolokBossLocomotion__Class* get_class() {
            return il2cpp::get_class<app::KwolokBossLocomotion__Class>(type_info, "", "KwolokBossLocomotion");
        }
        inline app::KwolokBossLocomotion* create() {
            return il2cpp::create_object<app::KwolokBossLocomotion>(get_class());
        }
    } // namespace KwolokBossLocomotion
} // namespace app::classes::types
