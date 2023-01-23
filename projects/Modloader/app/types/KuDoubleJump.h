#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/KuDoubleJump__Class.h>
#include <Modloader/app/structs/KuDoubleJump.h>

namespace app::classes::types {
    namespace KuDoubleJump {
        namespace {
            inline app::KuDoubleJump__Class* type_info_ref = nullptr;
        }
        inline app::KuDoubleJump__Class** type_info = &type_info_ref;
        inline app::KuDoubleJump__Class* get_class() {
            return il2cpp::get_class<app::KuDoubleJump__Class>(type_info, "", "KuDoubleJump");
        }
        inline app::KuDoubleJump* create() {
            return il2cpp::create_object<app::KuDoubleJump>(get_class());
        }
    } // namespace KuDoubleJump
} // namespace app::classes::types
