#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/MapmakerScreen__Class.h>
#include <Modloader/app/structs/MapmakerScreen.h>

namespace app::classes::types {
    namespace MapmakerScreen {
        inline app::MapmakerScreen__Class** type_info = (app::MapmakerScreen__Class**)(modloader::win::memory::resolve_rva(0x04744110));
        inline app::MapmakerScreen__Class* get_class() {
            return il2cpp::get_class<app::MapmakerScreen__Class>(type_info, "", "MapmakerScreen");
        }
        inline app::MapmakerScreen* create() {
            return il2cpp::create_object<app::MapmakerScreen>(get_class());
        }
    } // namespace MapmakerScreen
} // namespace app::classes::types
