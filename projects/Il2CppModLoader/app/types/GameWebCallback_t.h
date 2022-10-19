#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace GameWebCallback_t {
        namespace {
            inline app::GameWebCallback_t__Class* type_info_ref = nullptr;
        }
        inline app::GameWebCallback_t__Class** type_info = &type_info_ref;
        inline app::GameWebCallback_t__Class* get_class() {
            return il2cpp::get_class<app::GameWebCallback_t__Class>(type_info, "Steamworks", "GameWebCallback_t");
        }
        inline app::GameWebCallback_t* create() {
            return il2cpp::create_object<app::GameWebCallback_t>(get_class());
        }
        inline app::GameWebCallback_t__Boxed* box(app::GameWebCallback_t value) {
            return il2cpp::box_value<app::GameWebCallback_t__Boxed>(get_class(), value);
        }
    } // namespace GameWebCallback_t
} // namespace app::classes::types
