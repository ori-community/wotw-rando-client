#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace PlayStreamEventBase {
        namespace {
            inline app::PlayStreamEventBase__Class* type_info_ref = nullptr;
        }
        inline app::PlayStreamEventBase__Class** type_info = &type_info_ref;
        inline app::PlayStreamEventBase__Class* get_class() {
            return il2cpp::get_class<app::PlayStreamEventBase__Class>(type_info, "PlayFab.PlayStreamModels", "PlayStreamEventBase");
        }
        inline app::PlayStreamEventBase* create() {
            return il2cpp::create_object<app::PlayStreamEventBase>(get_class());
        }
    } // namespace PlayStreamEventBase
} // namespace app::classes::types
