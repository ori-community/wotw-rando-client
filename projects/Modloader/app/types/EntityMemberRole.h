#pragma once
#include <Modloader/app/structs/EntityMemberRole.h>
#include <Modloader/app/structs/EntityMemberRole__Array.h>
#include <Modloader/app/structs/EntityMemberRole__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EntityMemberRole {
        inline app::EntityMemberRole__Class** type_info() {
            static app::EntityMemberRole__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::EntityMemberRole__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::EntityMemberRole__Class* get_class() {
            return il2cpp::get_class<app::EntityMemberRole__Class>(type_info(), "PlayFab.GroupsModels", "EntityMemberRole");
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
