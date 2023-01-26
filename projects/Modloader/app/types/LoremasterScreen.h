#pragma once
#include <Modloader/app/structs/LoremasterScreen.h>
#include <Modloader/app/structs/LoremasterScreen__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LoremasterScreen {
        inline app::LoremasterScreen__Class** type_info() {
            static app::LoremasterScreen__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::LoremasterScreen__Class**)(modloader::win::memory::resolve_rva(0x04747620));
            }
            return cache;
        }
        inline app::LoremasterScreen__Class* get_class() {
            return il2cpp::get_class<app::LoremasterScreen__Class>(type_info(), "", "LoremasterScreen");
        }
        inline app::LoremasterScreen* create() {
            return il2cpp::create_object<app::LoremasterScreen>(get_class());
        }
    } // namespace LoremasterScreen
} // namespace app::classes::types
