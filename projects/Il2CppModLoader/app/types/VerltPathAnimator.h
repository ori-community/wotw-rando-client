#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace VerltPathAnimator {
        namespace {
            inline app::VerltPathAnimator__Class* type_info_ref = nullptr;
        }
        inline app::VerltPathAnimator__Class** type_info = &type_info_ref;
        inline app::VerltPathAnimator__Class* get_class() {
            return il2cpp::get_class<app::VerltPathAnimator__Class>(type_info, "Moon.Timeline", "VerltPathAnimator");
        }
        inline app::VerltPathAnimator* create() {
            return il2cpp::create_object<app::VerltPathAnimator>(get_class());
        }
    } // namespace VerltPathAnimator
} // namespace app::classes::types
