#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/CartJump__Class.h>
#include <Modloader/app/structs/CartJump.h>

namespace app::classes::types {
    namespace CartJump {
        namespace {
            inline app::CartJump__Class* type_info_ref = nullptr;
        }
        inline app::CartJump__Class** type_info = &type_info_ref;
        inline app::CartJump__Class* get_class() {
            return il2cpp::get_class<app::CartJump__Class>(type_info, "", "CartJump");
        }
        inline app::CartJump* create() {
            return il2cpp::create_object<app::CartJump>(get_class());
        }
    } // namespace CartJump
} // namespace app::classes::types
