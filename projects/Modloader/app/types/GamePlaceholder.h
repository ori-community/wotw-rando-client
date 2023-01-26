#pragma once
#include <Modloader/app/structs/GamePlaceholder.h>
#include <Modloader/app/structs/GamePlaceholder__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GamePlaceholder {
        inline app::GamePlaceholder__Class** type_info() {
            static app::GamePlaceholder__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GamePlaceholder__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GamePlaceholder__Class* get_class() {
            return il2cpp::get_class<app::GamePlaceholder__Class>(type_info(), "", "GamePlaceholder");
        }
        inline app::GamePlaceholder* create() {
            return il2cpp::create_object<app::GamePlaceholder>(get_class());
        }
    } // namespace GamePlaceholder
} // namespace app::classes::types
