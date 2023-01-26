#pragma once
#include <Modloader/app/structs/UiNodeWisps.h>
#include <Modloader/app/structs/UiNodeWisps__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UiNodeWisps {
        inline app::UiNodeWisps__Class** type_info() {
            static app::UiNodeWisps__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UiNodeWisps__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UiNodeWisps__Class* get_class() {
            return il2cpp::get_class<app::UiNodeWisps__Class>(type_info(), "", "UiNodeWisps");
        }
        inline app::UiNodeWisps* create() {
            return il2cpp::create_object<app::UiNodeWisps>(get_class());
        }
    } // namespace UiNodeWisps
} // namespace app::classes::types
