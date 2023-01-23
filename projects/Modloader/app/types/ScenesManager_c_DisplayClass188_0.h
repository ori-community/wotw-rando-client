#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ScenesManager_c_DisplayClass188_0__Class.h>
#include <Modloader/app/structs/ScenesManager_c_DisplayClass188_0.h>

namespace app::classes::types {
    namespace ScenesManager_c_DisplayClass188_0 {
        inline app::ScenesManager_c_DisplayClass188_0__Class** type_info = (app::ScenesManager_c_DisplayClass188_0__Class**)(modloader::win::memory::resolve_rva(0x04745E18));
        inline app::ScenesManager_c_DisplayClass188_0__Class* get_class() {
            return il2cpp::get_nested_class<app::ScenesManager_c_DisplayClass188_0__Class>(type_info, "", "ScenesManager", "<>c__DisplayClass188_0");
        }
        inline app::ScenesManager_c_DisplayClass188_0* create() {
            return il2cpp::create_object<app::ScenesManager_c_DisplayClass188_0>(get_class());
        }
    } // namespace ScenesManager_c_DisplayClass188_0
} // namespace app::classes::types
