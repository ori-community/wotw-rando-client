#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace KuJump {
        namespace {
            inline app::KuJump__Class* type_info_ref = nullptr;
        }
        inline app::KuJump__Class** type_info = &type_info_ref;
        inline app::KuJump__Class* get_class() {
            return il2cpp::get_class<app::KuJump__Class>(type_info, "", "KuJump");
        }
        inline app::KuJump* create() {
            return il2cpp::create_object<app::KuJump>(get_class());
        }
    } // namespace KuJump
} // namespace app::classes::types
