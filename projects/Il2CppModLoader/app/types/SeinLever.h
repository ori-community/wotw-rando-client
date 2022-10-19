#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SeinLever {
        namespace {
            inline app::SeinLever__Class* type_info_ref = nullptr;
        }
        inline app::SeinLever__Class** type_info = &type_info_ref;
        inline app::SeinLever__Class* get_class() {
            return il2cpp::get_class<app::SeinLever__Class>(type_info, "", "SeinLever");
        }
        inline app::SeinLever* create() {
            return il2cpp::create_object<app::SeinLever>(get_class());
        }
    } // namespace SeinLever
} // namespace app::classes::types
