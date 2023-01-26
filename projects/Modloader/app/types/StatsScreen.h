#pragma once
#include <Modloader/app/structs/StatsScreen.h>
#include <Modloader/app/structs/StatsScreen__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace StatsScreen {
        inline app::StatsScreen__Class** type_info() {
            static app::StatsScreen__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::StatsScreen__Class**)(modloader::win::memory::resolve_rva(0x04705640));
            }
            return cache;
        }
        inline app::StatsScreen__Class* get_class() {
            return il2cpp::get_class<app::StatsScreen__Class>(type_info(), "", "StatsScreen");
        }
        inline app::StatsScreen* create() {
            return il2cpp::create_object<app::StatsScreen>(get_class());
        }
    } // namespace StatsScreen
} // namespace app::classes::types
