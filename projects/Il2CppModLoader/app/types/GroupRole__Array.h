#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace GroupRole__Array {
        namespace {
            inline app::GroupRole__Array__Class* type_info_ref = nullptr;
        }
        inline app::GroupRole__Array__Class** type_info = &type_info_ref;
        inline app::GroupRole__Array__Class* get_class() {
            return il2cpp::get_class<app::GroupRole__Array__Class>(type_info, "PlayFab.GroupsModels", "GroupRole[]");
        }
        inline app::GroupRole__Array* create() {
            return il2cpp::create_object<app::GroupRole__Array>(get_class());
        }
    } // namespace GroupRole__Array
} // namespace app::classes::types
