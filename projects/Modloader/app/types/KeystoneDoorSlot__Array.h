#pragma once
#include <Modloader/app/structs/KeystoneDoorSlot__Array.h>
#include <Modloader/app/structs/KeystoneDoorSlot__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace KeystoneDoorSlot__Array {
        inline app::KeystoneDoorSlot__Array__Class** type_info() {
            static app::KeystoneDoorSlot__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::KeystoneDoorSlot__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::KeystoneDoorSlot__Array__Class* get_class() {
            return il2cpp::get_class<app::KeystoneDoorSlot__Array__Class>(type_info(), "", "KeystoneDoorSlot[]");
        }
        inline app::KeystoneDoorSlot__Array* create() {
            return il2cpp::create_object<app::KeystoneDoorSlot__Array>(get_class());
        }
    } // namespace KeystoneDoorSlot__Array
} // namespace app::classes::types
