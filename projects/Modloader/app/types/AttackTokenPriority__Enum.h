#pragma once
#include <Modloader/app/structs/AttackTokenPriority__Enum.h>
#include <Modloader/app/structs/AttackTokenPriority__Enum__Array.h>
#include <Modloader/app/structs/AttackTokenPriority__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AttackTokenPriority__Enum {
        inline app::AttackTokenPriority__Enum__Class** type_info() {
            static app::AttackTokenPriority__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AttackTokenPriority__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AttackTokenPriority__Enum__Class* get_class() {
            return il2cpp::get_class<app::AttackTokenPriority__Enum__Class>(type_info(), "", "AttackTokenPriority");
        }
        inline app::AttackTokenPriority__Enum* create() {
            return il2cpp::create_object<app::AttackTokenPriority__Enum>(get_class());
        }
        inline app::AttackTokenPriority__Enum__Array* create_array(int size) {
            return il2cpp::array_new<app::AttackTokenPriority__Enum__Array>(get_class(), size);
        }
        inline app::AttackTokenPriority__Enum__Array* create_array(const std::vector<app::AttackTokenPriority__Enum*>& items) {
            return il2cpp::array_new<app::AttackTokenPriority__Enum__Array>(get_class(), items);
        }
    } // namespace AttackTokenPriority__Enum
} // namespace app::classes::types
