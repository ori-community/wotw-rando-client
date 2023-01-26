#pragma once
#include <Modloader/app/structs/SetSeinColliderHeight.h>
#include <Modloader/app/structs/SetSeinColliderHeight__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SetSeinColliderHeight {
        inline app::SetSeinColliderHeight__Class** type_info() {
            static app::SetSeinColliderHeight__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SetSeinColliderHeight__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SetSeinColliderHeight__Class* get_class() {
            return il2cpp::get_class<app::SetSeinColliderHeight__Class>(type_info(), "", "SetSeinColliderHeight");
        }
        inline app::SetSeinColliderHeight* create() {
            return il2cpp::create_object<app::SetSeinColliderHeight>(get_class());
        }
    } // namespace SetSeinColliderHeight
} // namespace app::classes::types
