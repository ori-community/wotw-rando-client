#pragma once
#include <Modloader/app/structs/PauseScreen.h>
#include <Modloader/app/structs/PauseScreen__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PauseScreen {
        inline app::PauseScreen__Class** type_info() {
            static app::PauseScreen__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PauseScreen__Class**)(modloader::win::memory::resolve_rva(0x0478EEB8));
            }
            return cache;
        }
        inline app::PauseScreen__Class* get_class() {
            return il2cpp::get_class<app::PauseScreen__Class>(type_info(), "", "PauseScreen");
        }
        inline app::PauseScreen* create() {
            return il2cpp::create_object<app::PauseScreen>(get_class());
        }
    } // namespace PauseScreen
} // namespace app::classes::types
