#pragma once
#include <Modloader/app/structs/LoadTeaser.h>
#include <Modloader/app/structs/LoadTeaser__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LoadTeaser {
        inline app::LoadTeaser__Class** type_info() {
            static app::LoadTeaser__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LoadTeaser__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LoadTeaser__Class* get_class() {
            return il2cpp::get_class<app::LoadTeaser__Class>(type_info(), "", "LoadTeaser");
        }
        inline app::LoadTeaser* create() {
            return il2cpp::create_object<app::LoadTeaser>(get_class());
        }
    } // namespace LoadTeaser
} // namespace app::classes::types
