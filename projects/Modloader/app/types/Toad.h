#pragma once
#include <Modloader/app/structs/Toad.h>
#include <Modloader/app/structs/Toad__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Toad {
        inline app::Toad__Class** type_info() {
            static app::Toad__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Toad__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Toad__Class* get_class() {
            return il2cpp::get_class<app::Toad__Class>(type_info(), "", "Toad");
        }
        inline app::Toad* create() {
            return il2cpp::create_object<app::Toad>(get_class());
        }
    } // namespace Toad
} // namespace app::classes::types
