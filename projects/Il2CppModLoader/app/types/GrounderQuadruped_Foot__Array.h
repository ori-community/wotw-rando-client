#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace GrounderQuadruped_Foot__Array {
        inline app::GrounderQuadruped_Foot__Array__Class** type_info = (app::GrounderQuadruped_Foot__Array__Class**)(modloader::win::memory::resolve_rva(0x0476EFD0));
        inline app::GrounderQuadruped_Foot__Array__Class* get_class() {
            return il2cpp::get_class<app::GrounderQuadruped_Foot__Array__Class>(type_info, "RootMotion.FinalIK", "GrounderQuadruped+Foot[]");
        }
        inline app::GrounderQuadruped_Foot__Array* create() {
            return il2cpp::create_object<app::GrounderQuadruped_Foot__Array>(get_class());
        }
    } // namespace GrounderQuadruped_Foot__Array
} // namespace app::classes::types
