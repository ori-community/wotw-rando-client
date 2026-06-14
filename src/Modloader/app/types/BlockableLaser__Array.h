#pragma once
#include <Modloader/app/structs/BlockableLaser__Array.h>
#include <Modloader/app/structs/BlockableLaser__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BlockableLaser__Array {
        inline app::BlockableLaser__Array__Class** type_info() {
            static app::BlockableLaser__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::BlockableLaser__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::BlockableLaser__Array__Class* get_class() {
            return il2cpp::get_class<app::BlockableLaser__Array__Class>(type_info(), "", "BlockableLaser[]");
        }
        inline app::BlockableLaser__Array* create() {
            return il2cpp::create_object<app::BlockableLaser__Array>(get_class());
        }
    } // namespace BlockableLaser__Array
} // namespace app::classes::types
