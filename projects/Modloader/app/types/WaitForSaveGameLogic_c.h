#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/WaitForSaveGameLogic_c__Class.h>
#include <Modloader/app/structs/WaitForSaveGameLogic_c.h>

namespace app::classes::types {
    namespace WaitForSaveGameLogic_c {
        inline app::WaitForSaveGameLogic_c__Class** type_info = (app::WaitForSaveGameLogic_c__Class**)(modloader::win::memory::resolve_rva(0x04799610));
        inline app::WaitForSaveGameLogic_c__Class* get_class() {
            return il2cpp::get_nested_class<app::WaitForSaveGameLogic_c__Class>(type_info, "", "WaitForSaveGameLogic", "<>c");
        }
        inline app::WaitForSaveGameLogic_c* create() {
            return il2cpp::create_object<app::WaitForSaveGameLogic_c>(get_class());
        }
    } // namespace WaitForSaveGameLogic_c
} // namespace app::classes::types
