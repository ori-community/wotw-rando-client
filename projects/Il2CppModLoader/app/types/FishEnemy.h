#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace FishEnemy {
        namespace {
            inline app::FishEnemy__Class* type_info_ref = nullptr;
        }
        inline app::FishEnemy__Class** type_info = &type_info_ref;
        inline app::FishEnemy__Class* get_class() {
            return il2cpp::get_class<app::FishEnemy__Class>(type_info, "", "FishEnemy");
        }
        inline app::FishEnemy* create() {
            return il2cpp::create_object<app::FishEnemy>(get_class());
        }
    } // namespace FishEnemy
} // namespace app::classes::types
