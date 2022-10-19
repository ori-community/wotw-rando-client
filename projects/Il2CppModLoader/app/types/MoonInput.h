#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace MoonInput {
        namespace {
            inline app::MoonInput__Class* type_info_ref = nullptr;
        }
        inline app::MoonInput__Class** type_info = &type_info_ref;
        inline app::MoonInput__Class* get_class() {
            return il2cpp::get_class<app::MoonInput__Class>(type_info, "", "MoonInput");
        }
        inline app::MoonInput* create() {
            return il2cpp::create_object<app::MoonInput>(get_class());
        }
    } // namespace MoonInput
} // namespace app::classes::types
