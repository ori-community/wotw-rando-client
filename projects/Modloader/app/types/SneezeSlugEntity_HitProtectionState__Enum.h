#pragma once
#include <Modloader/app/structs/SneezeSlugEntity_HitProtectionState__Enum.h>
#include <Modloader/app/structs/SneezeSlugEntity_HitProtectionState__Enum__Array.h>
#include <Modloader/app/structs/SneezeSlugEntity_HitProtectionState__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SneezeSlugEntity_HitProtectionState__Enum {
        inline app::SneezeSlugEntity_HitProtectionState__Enum__Class** type_info() {
            static app::SneezeSlugEntity_HitProtectionState__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SneezeSlugEntity_HitProtectionState__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SneezeSlugEntity_HitProtectionState__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::SneezeSlugEntity_HitProtectionState__Enum__Class>(type_info(), "", "SneezeSlugEntity", "HitProtectionState");
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
