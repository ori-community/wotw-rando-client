#pragma once
#include <Modloader/app/structs/BuilderScreen.h>
#include <Modloader/app/structs/BuilderScreen__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BuilderScreen {
        inline app::BuilderScreen__Class** type_info() {
            static app::BuilderScreen__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::BuilderScreen__Class**)(modloader::win::memory::resolve_rva(0x04704B28));
            }
            return cache;
        }
        inline app::BuilderScreen__Class* get_class() {
            return il2cpp::get_class<app::BuilderScreen__Class>(type_info(), "", "BuilderScreen");
        }
        inline app::BuilderScreen* create() {
            return il2cpp::create_object<app::BuilderScreen>(get_class());
        }
    } // namespace BuilderScreen
} // namespace app::classes::types
