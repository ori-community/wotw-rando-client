#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace KeystoneDoorSlot__Array {
        namespace {
            inline app::KeystoneDoorSlot__Array__Class* type_info_ref = nullptr;
        }
        inline app::KeystoneDoorSlot__Array__Class** type_info = &type_info_ref;
        inline app::KeystoneDoorSlot__Array__Class* get_class() {
            return il2cpp::get_class<app::KeystoneDoorSlot__Array__Class>(type_info, "", "KeystoneDoorSlot[]");
        }
        inline app::KeystoneDoorSlot__Array* create() {
            return il2cpp::create_object<app::KeystoneDoorSlot__Array>(get_class());
        }
    } // namespace KeystoneDoorSlot__Array
} // namespace app::classes::types
