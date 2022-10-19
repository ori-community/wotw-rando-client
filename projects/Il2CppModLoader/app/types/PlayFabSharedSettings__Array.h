#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace PlayFabSharedSettings__Array {
        namespace {
            inline app::PlayFabSharedSettings__Array__Class* type_info_ref = nullptr;
        }
        inline app::PlayFabSharedSettings__Array__Class** type_info = &type_info_ref;
        inline app::PlayFabSharedSettings__Array__Class* get_class() {
            return il2cpp::get_class<app::PlayFabSharedSettings__Array__Class>(type_info, "", "PlayFabSharedSettings[]");
        }
        inline app::PlayFabSharedSettings__Array* create() {
            return il2cpp::create_object<app::PlayFabSharedSettings__Array>(get_class());
        }
    } // namespace PlayFabSharedSettings__Array
} // namespace app::classes::types
