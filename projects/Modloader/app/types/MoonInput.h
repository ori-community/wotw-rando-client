#pragma once
#include <Modloader/app/structs/MoonInput.h>
#include <Modloader/app/structs/MoonInput__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MoonInput {
        inline app::MoonInput__Class** type_info() {
            static app::MoonInput__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MoonInput__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MoonInput__Class* get_class() {
            return il2cpp::get_class<app::MoonInput__Class>(type_info(), "", "MoonInput");
        }
        inline app::MoonInput* create() {
            return il2cpp::create_object<app::MoonInput>(get_class());
        }
    } // namespace MoonInput
} // namespace app::classes::types
