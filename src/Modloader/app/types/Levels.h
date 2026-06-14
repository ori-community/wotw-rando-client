#pragma once
#include <Modloader/app/structs/Levels.h>
#include <Modloader/app/structs/Levels__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Levels {
        inline app::Levels__Class** type_info() {
            static app::Levels__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Levels__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Levels__Class* get_class() {
            return il2cpp::get_class<app::Levels__Class>(type_info(), "Colorful", "Levels");
        }
        inline app::Levels* create() {
            return il2cpp::create_object<app::Levels>(get_class());
        }
    } // namespace Levels
} // namespace app::classes::types
