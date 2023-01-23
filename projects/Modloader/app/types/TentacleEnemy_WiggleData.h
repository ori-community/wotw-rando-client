#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/TentacleEnemy_WiggleData__Class.h>
#include <Modloader/app/structs/TentacleEnemy_WiggleData.h>

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
