#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SneezeSlugEntity_HitProtectionState__Enum {
        namespace {
            inline app::SneezeSlugEntity_HitProtectionState__Enum__Class* type_info_ref = nullptr;
        }
        inline app::SneezeSlugEntity_HitProtectionState__Enum__Class** type_info = &type_info_ref;
        inline app::SneezeSlugEntity_HitProtectionState__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::SneezeSlugEntity_HitProtectionState__Enum__Class>(type_info, "", "SneezeSlugEntity", "HitProtectionState");
        }
        inline app::SneezeSlugEntity_HitProtectionState__Enum* create() {
            return il2cpp::create_object<app::SneezeSlugEntity_HitProtectionState__Enum>(get_class());
        }
        inline app::SneezeSlugEntity_HitProtectionState__Enum__Array* create_array(int size) {
            return il2cpp::array_new<app::SneezeSlugEntity_HitProtectionState__Enum__Array>(get_class(), size);
        }
        inline app::SneezeSlugEntity_HitProtectionState__Enum__Array* create_array(const std::vector<app::SneezeSlugEntity_HitProtectionState__Enum*>& items) {
            return il2cpp::array_new<app::SneezeSlugEntity_HitProtectionState__Enum__Array>(get_class(), items);
        }
    } // namespace SneezeSlugEntity_HitProtectionState__Enum
} // namespace app::classes::types
