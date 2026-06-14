#pragma once
#include <Modloader/app/structs/Firefly.h>
#include <Modloader/app/structs/Firefly__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Firefly {
        inline app::Firefly__Class** type_info() {
            static app::Firefly__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Firefly__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Firefly__Class* get_class() {
            return il2cpp::get_class<app::Firefly__Class>(type_info(), "", "Firefly");
        }
        inline app::Firefly* create() {
            return il2cpp::create_object<app::Firefly>(get_class());
        }
    } // namespace Firefly
} // namespace app::classes::types
