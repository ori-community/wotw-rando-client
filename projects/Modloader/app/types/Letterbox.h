#pragma once
#include <Modloader/app/structs/Letterbox.h>
#include <Modloader/app/structs/Letterbox__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Letterbox {
        inline app::Letterbox__Class** type_info() {
            static app::Letterbox__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Letterbox__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Letterbox__Class* get_class() {
            return il2cpp::get_class<app::Letterbox__Class>(type_info(), "Colorful", "Letterbox");
        }
        inline app::Letterbox* create() {
            return il2cpp::create_object<app::Letterbox>(get_class());
        }
    } // namespace Letterbox
} // namespace app::classes::types
