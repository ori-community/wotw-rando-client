#pragma once
#include <Modloader/app/structs/SceneSanityB.h>
#include <Modloader/app/structs/SceneSanityB__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SceneSanityB {
        inline app::SceneSanityB__Class** type_info() {
            static app::SceneSanityB__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SceneSanityB__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SceneSanityB__Class* get_class() {
            return il2cpp::get_class<app::SceneSanityB__Class>(type_info(), "", "SceneSanityB");
        }
        inline app::SceneSanityB* create() {
            return il2cpp::create_object<app::SceneSanityB>(get_class());
        }
    } // namespace SceneSanityB
} // namespace app::classes::types
