#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace DashOwlEnemy {
        namespace {
            inline app::DashOwlEnemy__Class* type_info_ref = nullptr;
        }
        inline app::DashOwlEnemy__Class** type_info = &type_info_ref;
        inline app::DashOwlEnemy__Class* get_class() {
            return il2cpp::get_class<app::DashOwlEnemy__Class>(type_info, "", "DashOwlEnemy");
        }
        inline app::DashOwlEnemy* create() {
            return il2cpp::create_object<app::DashOwlEnemy>(get_class());
        }
    } // namespace DashOwlEnemy
} // namespace app::classes::types
