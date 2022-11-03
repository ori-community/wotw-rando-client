#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace WormEnemy {
        namespace {
            inline app::WormEnemy__Class* type_info_ref = nullptr;
        }
        inline app::WormEnemy__Class** type_info = &type_info_ref;
        inline app::WormEnemy__Class* get_class() {
            return il2cpp::get_class<app::WormEnemy__Class>(type_info, "", "WormEnemy");
        }
        inline app::WormEnemy* create() {
            return il2cpp::create_object<app::WormEnemy>(get_class());
        }
    } // namespace WormEnemy
} // namespace app::classes::types
