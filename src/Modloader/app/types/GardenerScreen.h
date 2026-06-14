#pragma once
#include <Modloader/app/structs/GardenerScreen.h>
#include <Modloader/app/structs/GardenerScreen__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GardenerScreen {
        inline app::GardenerScreen__Class** type_info() {
            static app::GardenerScreen__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GardenerScreen__Class**)(modloader::win::memory::resolve_rva(0x047871C8));
            }
            return cache;
        }
        inline app::GardenerScreen__Class* get_class() {
            return il2cpp::get_class<app::GardenerScreen__Class>(type_info(), "", "GardenerScreen");
        }
        inline app::GardenerScreen* create() {
            return il2cpp::create_object<app::GardenerScreen>(get_class());
        }
    } // namespace GardenerScreen
} // namespace app::classes::types
