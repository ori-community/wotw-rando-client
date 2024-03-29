#pragma once
#include <Modloader/app/structs/SceneSanity.h>
#include <Modloader/app/structs/SceneSanity__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SceneSanity {
        inline app::SceneSanity__Class** type_info() {
            static app::SceneSanity__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SceneSanity__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SceneSanity__Class* get_class() {
            return il2cpp::get_class<app::SceneSanity__Class>(type_info(), "", "SceneSanity");
        }
        inline app::SceneSanity* create() {
            return il2cpp::create_object<app::SceneSanity>(get_class());
        }
    } // namespace SceneSanity
} // namespace app::classes::types
