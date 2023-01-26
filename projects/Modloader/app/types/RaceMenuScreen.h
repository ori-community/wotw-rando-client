#pragma once
#include <Modloader/app/structs/RaceMenuScreen.h>
#include <Modloader/app/structs/RaceMenuScreen__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RaceMenuScreen {
        inline app::RaceMenuScreen__Class** type_info() {
            static app::RaceMenuScreen__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::RaceMenuScreen__Class**)(modloader::win::memory::resolve_rva(0x0478CBF8));
            }
            return cache;
        }
        inline app::RaceMenuScreen__Class* get_class() {
            return il2cpp::get_class<app::RaceMenuScreen__Class>(type_info(), "", "RaceMenuScreen");
        }
        inline app::RaceMenuScreen* create() {
            return il2cpp::create_object<app::RaceMenuScreen>(get_class());
        }
    } // namespace RaceMenuScreen
} // namespace app::classes::types
