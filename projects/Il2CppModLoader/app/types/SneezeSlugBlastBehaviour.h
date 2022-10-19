#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SneezeSlugBlastBehaviour {
        namespace {
            inline app::SneezeSlugBlastBehaviour__Class* type_info_ref = nullptr;
        }
        inline app::SneezeSlugBlastBehaviour__Class** type_info = &type_info_ref;
        inline app::SneezeSlugBlastBehaviour__Class* get_class() {
            return il2cpp::get_class<app::SneezeSlugBlastBehaviour__Class>(type_info, "", "SneezeSlugBlastBehaviour");
        }
        inline app::SneezeSlugBlastBehaviour* create() {
            return il2cpp::create_object<app::SneezeSlugBlastBehaviour>(get_class());
        }
    } // namespace SneezeSlugBlastBehaviour
} // namespace app::classes::types
