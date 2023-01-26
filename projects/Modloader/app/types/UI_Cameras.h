#pragma once
#include <Modloader/app/structs/UI_Cameras.h>
#include <Modloader/app/structs/UI_Cameras__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UI_Cameras {
        inline app::UI_Cameras__Class** type_info() {
            static app::UI_Cameras__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::UI_Cameras__Class**)(modloader::win::memory::resolve_rva(0x04704778));
            }
            return cache;
        }
        inline app::UI_Cameras__Class* get_class() {
            return il2cpp::get_nested_class<app::UI_Cameras__Class>(type_info(), "Game", "UI", "Cameras");
        }
        inline app::UI_Cameras* create() {
            return il2cpp::create_object<app::UI_Cameras>(get_class());
        }
    } // namespace UI_Cameras
} // namespace app::classes::types
