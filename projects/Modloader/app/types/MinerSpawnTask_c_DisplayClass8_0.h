#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/MinerSpawnTask_c_DisplayClass8_0__Class.h>
#include <Modloader/app/structs/MinerSpawnTask_c_DisplayClass8_0.h>

namespace app::classes::types {
    namespace MinerSpawnTask_c_DisplayClass8_0 {
        inline app::MinerSpawnTask_c_DisplayClass8_0__Class** type_info = (app::MinerSpawnTask_c_DisplayClass8_0__Class**)(modloader::win::memory::resolve_rva(0x0471DA90));
        inline app::MinerSpawnTask_c_DisplayClass8_0__Class* get_class() {
            return il2cpp::get_nested_class<app::MinerSpawnTask_c_DisplayClass8_0__Class>(type_info, "", "MinerSpawnTask", "<>c__DisplayClass8_0");
        }
        inline app::MinerSpawnTask_c_DisplayClass8_0* create() {
            return il2cpp::create_object<app::MinerSpawnTask_c_DisplayClass8_0>(get_class());
        }
    } // namespace MinerSpawnTask_c_DisplayClass8_0
} // namespace app::classes::types
