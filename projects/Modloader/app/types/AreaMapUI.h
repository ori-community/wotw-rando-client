#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/AreaMapUI__Class.h>
#include <Modloader/app/structs/AreaMapUI.h>

namespace app::classes::types {
    namespace AreaMapUI {
        inline app::AreaMapUI__Class** type_info = (app::AreaMapUI__Class**)(modloader::win::memory::resolve_rva(0x04744F58));
        inline app::AreaMapUI__Class* get_class() {
            return il2cpp::get_class<app::AreaMapUI__Class>(type_info, "", "AreaMapUI");
        }
        inline app::AreaMapUI* create() {
            return il2cpp::create_object<app::AreaMapUI>(get_class());
        }
    } // namespace AreaMapUI
} // namespace app::classes::types
