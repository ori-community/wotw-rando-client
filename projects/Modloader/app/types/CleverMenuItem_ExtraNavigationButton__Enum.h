#pragma once
#include <Modloader/app/structs/CleverMenuItem_ExtraNavigationButton__Enum.h>
#include <Modloader/app/structs/CleverMenuItem_ExtraNavigationButton__Enum__Array.h>
#include <Modloader/app/structs/CleverMenuItem_ExtraNavigationButton__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CleverMenuItem_ExtraNavigationButton__Enum {
        inline app::CleverMenuItem_ExtraNavigationButton__Enum__Class** type_info() {
            static app::CleverMenuItem_ExtraNavigationButton__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CleverMenuItem_ExtraNavigationButton__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CleverMenuItem_ExtraNavigationButton__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::CleverMenuItem_ExtraNavigationButton__Enum__Class>(type_info(), "", "CleverMenuItem", "ExtraNavigationButton");
        }
        inline app::CleverMenuItem_ExtraNavigationButton__Enum* create() {
            return il2cpp::create_object<app::CleverMenuItem_ExtraNavigationButton__Enum>(get_class());
        }
        inline app::CleverMenuItem_ExtraNavigationButton__Enum__Array* create_array(int size) {
            return il2cpp::array_new<app::CleverMenuItem_ExtraNavigationButton__Enum__Array>(get_class(), size);
        }
        inline app::CleverMenuItem_ExtraNavigationButton__Enum__Array* create_array(const std::vector<app::CleverMenuItem_ExtraNavigationButton__Enum*>& items) {
            return il2cpp::array_new<app::CleverMenuItem_ExtraNavigationButton__Enum__Array>(get_class(), items);
        }
    } // namespace CleverMenuItem_ExtraNavigationButton__Enum
} // namespace app::classes::types
