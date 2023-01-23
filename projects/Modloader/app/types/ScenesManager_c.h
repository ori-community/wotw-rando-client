#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ScenesManager_c__Class.h>
#include <Modloader/app/structs/ScenesManager_c.h>

namespace app::classes::types {
    namespace ScenesManager_c {
        inline app::ScenesManager_c__Class** type_info = (app::ScenesManager_c__Class**)(modloader::win::memory::resolve_rva(0x047010D8));
        inline app::ScenesManager_c__Class* get_class() {
            return il2cpp::get_nested_class<app::ScenesManager_c__Class>(type_info, "", "ScenesManager", "<>c");
        }
        inline app::ScenesManager_c* create() {
            return il2cpp::create_object<app::ScenesManager_c>(get_class());
        }
    } // namespace ScenesManager_c
} // namespace app::classes::types
