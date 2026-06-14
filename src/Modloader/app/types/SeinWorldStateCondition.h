#pragma once
#include <Modloader/app/structs/SeinWorldStateCondition.h>
#include <Modloader/app/structs/SeinWorldStateCondition__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinWorldStateCondition {
        inline app::SeinWorldStateCondition__Class** type_info() {
            static app::SeinWorldStateCondition__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SeinWorldStateCondition__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SeinWorldStateCondition__Class* get_class() {
            return il2cpp::get_class<app::SeinWorldStateCondition__Class>(type_info(), "", "SeinWorldStateCondition");
        }
        inline app::SeinWorldStateCondition* create() {
            return il2cpp::create_object<app::SeinWorldStateCondition>(get_class());
        }
    } // namespace SeinWorldStateCondition
} // namespace app::classes::types
