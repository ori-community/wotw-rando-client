#pragma once
#include <Modloader/app/structs/ShardLogic.h>
#include <Modloader/app/structs/ShardLogic__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShardLogic {
        inline app::ShardLogic__Class** type_info() {
            static app::ShardLogic__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ShardLogic__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ShardLogic__Class* get_class() {
            return il2cpp::get_class<app::ShardLogic__Class>(type_info(), "", "ShardLogic");
        }
        inline app::ShardLogic* create() {
            return il2cpp::create_object<app::ShardLogic>(get_class());
        }
    } // namespace ShardLogic
} // namespace app::classes::types
