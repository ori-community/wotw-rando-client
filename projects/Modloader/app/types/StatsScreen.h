#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/StatsScreen__Class.h>
#include <Modloader/app/structs/StatsScreen.h>

namespace app::classes::types {
    namespace StatsScreen {
        inline app::StatsScreen__Class** type_info = (app::StatsScreen__Class**)(modloader::win::memory::resolve_rva(0x04705640));
        inline app::StatsScreen__Class* get_class() {
            return il2cpp::get_class<app::StatsScreen__Class>(type_info, "", "StatsScreen");
        }
        inline app::StatsScreen* create() {
            return il2cpp::create_object<app::StatsScreen>(get_class());
        }
    } // namespace StatsScreen
} // namespace app::classes::types
