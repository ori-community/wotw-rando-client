#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SeinFootsteps {
        namespace {
            inline app::SeinFootsteps__Class* type_info_ref = nullptr;
        }
        inline app::SeinFootsteps__Class** type_info = &type_info_ref;
        inline app::SeinFootsteps__Class* get_class() {
            return il2cpp::get_class<app::SeinFootsteps__Class>(type_info, "", "SeinFootsteps");
        }
        inline app::SeinFootsteps* create() {
            return il2cpp::create_object<app::SeinFootsteps>(get_class());
        }
    } // namespace SeinFootsteps
} // namespace app::classes::types
