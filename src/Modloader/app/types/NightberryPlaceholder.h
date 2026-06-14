#pragma once
#include <Modloader/app/structs/NightberryPlaceholder.h>
#include <Modloader/app/structs/NightberryPlaceholder__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace NightberryPlaceholder {
        inline app::NightberryPlaceholder__Class** type_info() {
            static app::NightberryPlaceholder__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::NightberryPlaceholder__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::NightberryPlaceholder__Class* get_class() {
            return il2cpp::get_class<app::NightberryPlaceholder__Class>(type_info(), "", "NightberryPlaceholder");
        }
        inline app::NightberryPlaceholder* create() {
            return il2cpp::create_object<app::NightberryPlaceholder>(get_class());
        }
    } // namespace NightberryPlaceholder
} // namespace app::classes::types
