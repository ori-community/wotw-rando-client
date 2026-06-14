#pragma once
#include <Modloader/app/structs/GasballReactions.h>
#include <Modloader/app/structs/GasballReactions__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GasballReactions {
        inline app::GasballReactions__Class** type_info() {
            static app::GasballReactions__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GasballReactions__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GasballReactions__Class* get_class() {
            return il2cpp::get_class<app::GasballReactions__Class>(type_info(), "", "GasballReactions");
        }
        inline app::GasballReactions* create() {
            return il2cpp::create_object<app::GasballReactions>(get_class());
        }
    } // namespace GasballReactions
} // namespace app::classes::types
