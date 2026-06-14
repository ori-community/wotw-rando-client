#pragma once
#include <Modloader/app/structs/BaseNPC.h>
#include <Modloader/app/structs/BaseNPC__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BaseNPC {
        inline app::BaseNPC__Class** type_info() {
            static app::BaseNPC__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::BaseNPC__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::BaseNPC__Class* get_class() {
            return il2cpp::get_class<app::BaseNPC__Class>(type_info(), "", "BaseNPC");
        }
        inline app::BaseNPC* create() {
            return il2cpp::create_object<app::BaseNPC>(get_class());
        }
    } // namespace BaseNPC
} // namespace app::classes::types
