#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace TentacleAnimationPostprocess {
        inline app::TentacleAnimationPostprocess__Class** type_info = (app::TentacleAnimationPostprocess__Class**)(modloader::win::memory::resolve_rva(0x04743A38));
        inline app::TentacleAnimationPostprocess__Class* get_class() {
            return il2cpp::get_class<app::TentacleAnimationPostprocess__Class>(type_info, "Moon", "TentacleAnimationPostprocess");
        }
        inline app::TentacleAnimationPostprocess* create() {
            return il2cpp::create_object<app::TentacleAnimationPostprocess>(get_class());
        }
    } // namespace TentacleAnimationPostprocess
} // namespace app::classes::types
