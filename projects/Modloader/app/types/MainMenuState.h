#pragma once
#include <Modloader/app/structs/MainMenuState.h>
#include <Modloader/app/structs/MainMenuState__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MainMenuState {
        inline app::MainMenuState__Class** type_info() {
            static app::MainMenuState__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MainMenuState__Class**)(modloader::win::memory::resolve_rva(0x0472AEC0));
            }
            return cache;
        }
        inline app::MainMenuState__Class* get_class() {
            return il2cpp::get_class<app::MainMenuState__Class>(type_info(), "", "MainMenuState");
        }
        inline app::MainMenuState* create() {
            return il2cpp::create_object<app::MainMenuState>(get_class());
        }
    } // namespace MainMenuState
} // namespace app::classes::types
