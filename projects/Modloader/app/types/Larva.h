#pragma once
#include <Modloader/app/structs/Larva.h>
#include <Modloader/app/structs/Larva__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Larva {
        inline app::Larva__Class** type_info() {
            static app::Larva__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Larva__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Larva__Class* get_class() {
            return il2cpp::get_class<app::Larva__Class>(type_info(), "", "Larva");
        }
        inline app::Larva* create() {
            return il2cpp::create_object<app::Larva>(get_class());
        }
    } // namespace Larva
} // namespace app::classes::types
