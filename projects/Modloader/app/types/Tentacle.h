#pragma once
#include <Modloader/app/structs/Tentacle.h>
#include <Modloader/app/structs/Tentacle__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Tentacle {
        inline app::Tentacle__Class** type_info() {
            static app::Tentacle__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Tentacle__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Tentacle__Class* get_class() {
            return il2cpp::get_class<app::Tentacle__Class>(type_info(), "", "Tentacle");
        }
        inline app::Tentacle* create() {
            return il2cpp::create_object<app::Tentacle>(get_class());
        }
    } // namespace Tentacle
} // namespace app::classes::types
