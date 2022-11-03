#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace KeystoneDoorLogic {
        namespace {
            inline app::KeystoneDoorLogic__Class* type_info_ref = nullptr;
        }
        inline app::KeystoneDoorLogic__Class** type_info = &type_info_ref;
        inline app::KeystoneDoorLogic__Class* get_class() {
            return il2cpp::get_class<app::KeystoneDoorLogic__Class>(type_info, "", "KeystoneDoorLogic");
        }
        inline app::KeystoneDoorLogic* create() {
            return il2cpp::create_object<app::KeystoneDoorLogic>(get_class());
        }
    } // namespace KeystoneDoorLogic
} // namespace app::classes::types
