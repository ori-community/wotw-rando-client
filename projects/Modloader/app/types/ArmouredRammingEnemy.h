#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ArmouredRammingEnemy {
        namespace {
            inline app::ArmouredRammingEnemy__Class* type_info_ref = nullptr;
        }
        inline app::ArmouredRammingEnemy__Class** type_info = &type_info_ref;
        inline app::ArmouredRammingEnemy__Class* get_class() {
            return il2cpp::get_class<app::ArmouredRammingEnemy__Class>(type_info, "", "ArmouredRammingEnemy");
        }
        inline app::ArmouredRammingEnemy* create() {
            return il2cpp::create_object<app::ArmouredRammingEnemy>(get_class());
        }
    } // namespace ArmouredRammingEnemy
} // namespace app::classes::types
