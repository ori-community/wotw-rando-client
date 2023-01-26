#pragma once
#include <Modloader/app/structs/Glitch.h>
#include <Modloader/app/structs/Glitch__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Glitch {
        inline app::Glitch__Class** type_info() {
            static app::Glitch__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Glitch__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Glitch__Class* get_class() {
            return il2cpp::get_class<app::Glitch__Class>(type_info(), "Colorful", "Glitch");
        }
        inline app::Glitch* create() {
            return il2cpp::create_object<app::Glitch>(get_class());
        }
    } // namespace Glitch
} // namespace app::classes::types
