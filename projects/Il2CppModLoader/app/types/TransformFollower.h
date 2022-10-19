#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace TransformFollower {
        namespace {
            inline app::TransformFollower__Class* type_info_ref = nullptr;
        }
        inline app::TransformFollower__Class** type_info = &type_info_ref;
        inline app::TransformFollower__Class* get_class() {
            return il2cpp::get_class<app::TransformFollower__Class>(type_info, "", "TransformFollower");
        }
        inline app::TransformFollower* create() {
            return il2cpp::create_object<app::TransformFollower>(get_class());
        }
    } // namespace TransformFollower
} // namespace app::classes::types
