#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace LegacySwarmEnemy {
        inline app::LegacySwarmEnemy__Class** type_info = (app::LegacySwarmEnemy__Class**)(modloader::win::memory::resolve_rva(0x0477B870));
        inline app::LegacySwarmEnemy__Class* get_class() {
            return il2cpp::get_class<app::LegacySwarmEnemy__Class>(type_info, "", "LegacySwarmEnemy");
        }
        inline app::LegacySwarmEnemy* create() {
            return il2cpp::create_object<app::LegacySwarmEnemy>(get_class());
        }
    } // namespace LegacySwarmEnemy
} // namespace app::classes::types
