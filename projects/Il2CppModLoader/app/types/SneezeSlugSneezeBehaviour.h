#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SneezeSlugSneezeBehaviour {
        namespace {
            inline app::SneezeSlugSneezeBehaviour__Class* type_info_ref = nullptr;
        }
        inline app::SneezeSlugSneezeBehaviour__Class** type_info = &type_info_ref;
        inline app::SneezeSlugSneezeBehaviour__Class* get_class() {
            return il2cpp::get_class<app::SneezeSlugSneezeBehaviour__Class>(type_info, "", "SneezeSlugSneezeBehaviour");
        }
        inline app::SneezeSlugSneezeBehaviour* create() {
            return il2cpp::create_object<app::SneezeSlugSneezeBehaviour>(get_class());
        }
    } // namespace SneezeSlugSneezeBehaviour
} // namespace app::classes::types
