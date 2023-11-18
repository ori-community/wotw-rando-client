#pragma once
#include <Modloader/app/structs/DemoMainMenuState.h>
#include <Modloader/app/structs/DemoMainMenuState__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DemoMainMenuState {
        inline app::DemoMainMenuState__Class** type_info() {
            static app::DemoMainMenuState__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DemoMainMenuState__Class**)(modloader::win::memory::resolve_rva(0x04796668));
            }
            return cache;
        }
        inline app::DemoMainMenuState__Class* get_class() {
            return il2cpp::get_class<app::DemoMainMenuState__Class>(type_info(), "", "DemoMainMenuState");
        }
        inline app::DemoMainMenuState* create() {
            return il2cpp::create_object<app::DemoMainMenuState>(get_class());
        }
    } // namespace DemoMainMenuState
} // namespace app::classes::types
