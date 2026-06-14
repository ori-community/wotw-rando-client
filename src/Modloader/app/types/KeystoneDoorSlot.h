#pragma once
#include <Modloader/app/structs/KeystoneDoorSlot.h>
#include <Modloader/app/structs/KeystoneDoorSlot__Array.h>
#include <Modloader/app/structs/KeystoneDoorSlot__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace KeystoneDoorSlot {
        inline app::KeystoneDoorSlot__Class** type_info() {
            static app::KeystoneDoorSlot__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::KeystoneDoorSlot__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::KeystoneDoorSlot__Class* get_class() {
            return il2cpp::get_class<app::KeystoneDoorSlot__Class>(type_info(), "", "KeystoneDoorSlot");
        }
        inline app::KeystoneDoorSlot* create() {
            return il2cpp::create_object<app::KeystoneDoorSlot>(get_class());
        }
        inline app::KeystoneDoorSlot__Array* create_array(int size) {
            return il2cpp::array_new<app::KeystoneDoorSlot__Array>(get_class(), size);
        }
        inline app::KeystoneDoorSlot__Array* create_array(const std::vector<app::KeystoneDoorSlot*>& items) {
            return il2cpp::array_new<app::KeystoneDoorSlot__Array>(get_class(), items);
        }
    } // namespace KeystoneDoorSlot
} // namespace app::classes::types
