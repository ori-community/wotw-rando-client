#pragma once
#include <Modloader/app/structs/TurtlePlaceholder.h>
#include <Modloader/app/structs/TurtlePlaceholder__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TurtlePlaceholder {
        inline app::TurtlePlaceholder__Class** type_info() {
            static app::TurtlePlaceholder__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TurtlePlaceholder__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TurtlePlaceholder__Class* get_class() {
            return il2cpp::get_class<app::TurtlePlaceholder__Class>(type_info(), "", "TurtlePlaceholder");
        }
        inline app::TurtlePlaceholder* create() {
            return il2cpp::create_object<app::TurtlePlaceholder>(get_class());
        }
    } // namespace TurtlePlaceholder
} // namespace app::classes::types
