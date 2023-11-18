#pragma once
#include <Modloader/app/structs/CleverMenuOptionsList.h>
#include <Modloader/app/structs/CleverMenuOptionsList__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CleverMenuOptionsList {
        inline app::CleverMenuOptionsList__Class** type_info() {
            static app::CleverMenuOptionsList__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CleverMenuOptionsList__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CleverMenuOptionsList__Class* get_class() {
            return il2cpp::get_class<app::CleverMenuOptionsList__Class>(type_info(), "", "CleverMenuOptionsList");
        }
        inline app::CleverMenuOptionsList* create() {
            return il2cpp::create_object<app::CleverMenuOptionsList>(get_class());
        }
    } // namespace CleverMenuOptionsList
} // namespace app::classes::types
