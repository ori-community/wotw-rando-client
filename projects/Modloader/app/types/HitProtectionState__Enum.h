#pragma once
#include <Modloader/app/structs/HitProtectionState__Enum.h>
#include <Modloader/app/structs/HitProtectionState__Enum__Array.h>
#include <Modloader/app/structs/HitProtectionState__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace HitProtectionState__Enum {
        inline app::HitProtectionState__Enum__Class** type_info() {
            static app::HitProtectionState__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::HitProtectionState__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::HitProtectionState__Enum__Class* get_class() {
            return il2cpp::get_class<app::HitProtectionState__Enum__Class>(type_info(), "", "HitProtectionState");
        }
        inline app::HitProtectionState__Enum* create() {
            return il2cpp::create_object<app::HitProtectionState__Enum>(get_class());
        }
        inline app::HitProtectionState__Enum__Array* create_array(int size) {
            return il2cpp::array_new<app::HitProtectionState__Enum__Array>(get_class(), size);
        }
        inline app::HitProtectionState__Enum__Array* create_array(const std::vector<app::HitProtectionState__Enum*>& items) {
            return il2cpp::array_new<app::HitProtectionState__Enum__Array>(get_class(), items);
        }
    } // namespace HitProtectionState__Enum
} // namespace app::classes::types
