#pragma once
#include <Modloader/app/structs/Rock.h>
#include <Modloader/app/structs/Rock__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Rock {
        inline app::Rock__Class** type_info() {
            static app::Rock__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Rock__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Rock__Class* get_class() {
            return il2cpp::get_class<app::Rock__Class>(type_info(), "", "Rock");
        }
        inline app::Rock* create() {
            return il2cpp::create_object<app::Rock>(get_class());
        }
    } // namespace Rock
} // namespace app::classes::types
