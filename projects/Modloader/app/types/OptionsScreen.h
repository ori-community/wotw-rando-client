#pragma once
#include <Modloader/app/structs/OptionsScreen.h>
#include <Modloader/app/structs/OptionsScreen__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace OptionsScreen {
        inline app::OptionsScreen__Class** type_info() {
            static app::OptionsScreen__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::OptionsScreen__Class**)(modloader::win::memory::resolve_rva(0x04773EA0));
            }
            return cache;
        }
        inline app::OptionsScreen__Class* get_class() {
            return il2cpp::get_class<app::OptionsScreen__Class>(type_info(), "", "OptionsScreen");
        }
        inline app::OptionsScreen* create() {
            return il2cpp::create_object<app::OptionsScreen>(get_class());
        }
    } // namespace OptionsScreen
} // namespace app::classes::types
