#pragma once
#include <Modloader/app/structs/ActiveCharacterCondition.h>
#include <Modloader/app/structs/ActiveCharacterCondition__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ActiveCharacterCondition {
        inline app::ActiveCharacterCondition__Class** type_info() {
            static app::ActiveCharacterCondition__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ActiveCharacterCondition__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ActiveCharacterCondition__Class* get_class() {
            return il2cpp::get_class<app::ActiveCharacterCondition__Class>(type_info(), "", "ActiveCharacterCondition");
        }
        inline app::ActiveCharacterCondition* create() {
            return il2cpp::create_object<app::ActiveCharacterCondition>(get_class());
        }
    } // namespace ActiveCharacterCondition
} // namespace app::classes::types
