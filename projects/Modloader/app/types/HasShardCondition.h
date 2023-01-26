#pragma once
#include <Modloader/app/structs/HasShardCondition.h>
#include <Modloader/app/structs/HasShardCondition__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace HasShardCondition {
        inline app::HasShardCondition__Class** type_info() {
            static app::HasShardCondition__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::HasShardCondition__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::HasShardCondition__Class* get_class() {
            return il2cpp::get_class<app::HasShardCondition__Class>(type_info(), "", "HasShardCondition");
        }
        inline app::HasShardCondition* create() {
            return il2cpp::create_object<app::HasShardCondition>(get_class());
        }
    } // namespace HasShardCondition
} // namespace app::classes::types
