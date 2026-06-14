#pragma once
#include <Modloader/app/structs/Fader.h>
#include <Modloader/app/structs/Fader__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Fader {
        inline app::Fader__Class** type_info() {
            static app::Fader__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Fader__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Fader__Class* get_class() {
            return il2cpp::get_class<app::Fader__Class>(type_info(), "", "Fader");
        }
        inline app::Fader* create() {
            return il2cpp::create_object<app::Fader>(get_class());
        }
    } // namespace Fader
} // namespace app::classes::types
