#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace UberTransformFollowRuntimeUpdateSystem {
        namespace {
            inline app::UberTransformFollowRuntimeUpdateSystem__Class* type_info_ref = nullptr;
        }
        inline app::UberTransformFollowRuntimeUpdateSystem__Class** type_info = &type_info_ref;
        inline app::UberTransformFollowRuntimeUpdateSystem__Class* get_class() {
            return il2cpp::get_class<app::UberTransformFollowRuntimeUpdateSystem__Class>(type_info, "", "UberTransformFollowRuntimeUpdateSystem");
        }
        inline app::UberTransformFollowRuntimeUpdateSystem* create() {
            return il2cpp::create_object<app::UberTransformFollowRuntimeUpdateSystem>(get_class());
        }
    } // namespace UberTransformFollowRuntimeUpdateSystem
} // namespace app::classes::types
