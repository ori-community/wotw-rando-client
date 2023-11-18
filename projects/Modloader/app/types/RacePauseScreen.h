#pragma once
#include <Modloader/app/structs/RacePauseScreen.h>
#include <Modloader/app/structs/RacePauseScreen__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RacePauseScreen {
        inline app::RacePauseScreen__Class** type_info() {
            static app::RacePauseScreen__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::RacePauseScreen__Class**)(modloader::win::memory::resolve_rva(0x04735410));
            }
            return cache;
        }
        inline app::RacePauseScreen__Class* get_class() {
            return il2cpp::get_class<app::RacePauseScreen__Class>(type_info(), "", "RacePauseScreen");
        }
        inline app::RacePauseScreen* create() {
            return il2cpp::create_object<app::RacePauseScreen>(get_class());
        }
    } // namespace RacePauseScreen
} // namespace app::classes::types
