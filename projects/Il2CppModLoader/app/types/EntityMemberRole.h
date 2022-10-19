#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace EntityMemberRole {
        namespace {
            inline app::EntityMemberRole__Class* type_info_ref = nullptr;
        }
        inline app::EntityMemberRole__Class** type_info = &type_info_ref;
        inline app::EntityMemberRole__Class* get_class() {
            return il2cpp::get_class<app::EntityMemberRole__Class>(type_info, "PlayFab.GroupsModels", "EntityMemberRole");
        }
        inline app::EntityMemberRole* create() {
            return il2cpp::create_object<app::EntityMemberRole>(get_class());
        }
        inline app::EntityMemberRole__Array* create_array(int size) {
            return il2cpp::array_new<app::EntityMemberRole__Array>(get_class(), size);
        }
        inline app::EntityMemberRole__Array* create_array(const std::vector<app::EntityMemberRole*>& items) {
            return il2cpp::array_new<app::EntityMemberRole__Array>(get_class(), items);
        }
    } // namespace EntityMemberRole
} // namespace app::classes::types
