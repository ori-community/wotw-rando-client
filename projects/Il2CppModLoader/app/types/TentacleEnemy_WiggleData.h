#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace TentacleEnemy_WiggleData {
        inline app::TentacleEnemy_WiggleData__Class** type_info = (app::TentacleEnemy_WiggleData__Class**)(modloader::win::memory::resolve_rva(0x0471E9D8));
        inline app::TentacleEnemy_WiggleData__Class* get_class() {
            return il2cpp::get_nested_class<app::TentacleEnemy_WiggleData__Class>(type_info, "", "TentacleEnemy", "WiggleData");
        }
        inline app::TentacleEnemy_WiggleData* create() {
            return il2cpp::create_object<app::TentacleEnemy_WiggleData>(get_class());
        }
    } // namespace TentacleEnemy_WiggleData
} // namespace app::classes::types
