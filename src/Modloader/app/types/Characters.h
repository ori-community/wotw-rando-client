#pragma once
#include <Modloader/app/structs/Characters.h>
#include <Modloader/app/structs/Characters__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Characters {
        inline app::Characters__Class** type_info() {
            static app::Characters__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Characters__Class**)(modloader::win::memory::resolve_rva(0x047340C0));
            }
            return cache;
        }
        inline app::Characters__Class* get_class() {
            return il2cpp::get_class<app::Characters__Class>(type_info(), "Game", "Characters");
        }
        inline app::Characters* create() {
            return il2cpp::create_object<app::Characters>(get_class());
        }
    } // namespace Characters
} // namespace app::classes::types
