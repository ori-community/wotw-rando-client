#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace Toad {
        namespace {
            inline app::Toad__Class* type_info_ref = nullptr;
        }
        inline app::Toad__Class** type_info = &type_info_ref;
        inline app::Toad__Class* get_class() {
            return il2cpp::get_class<app::Toad__Class>(type_info, "", "Toad");
        }
        inline app::Toad* create() {
            return il2cpp::create_object<app::Toad>(get_class());
        }
    } // namespace Toad
} // namespace app::classes::types
