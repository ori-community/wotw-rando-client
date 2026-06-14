#pragma once
#include <Modloader/app/structs/Achievement__Enum.h>
#include <Modloader/app/structs/Achievement__Enum__Array.h>
#include <Modloader/app/structs/Achievement__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Achievement__Enum {
        inline app::Achievement__Enum__Class** type_info() {
            static app::Achievement__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Achievement__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Achievement__Enum__Class* get_class() {
            return il2cpp::get_class<app::Achievement__Enum__Class>(type_info(), "", "Achievement");
        }
        inline app::Achievement__Enum* create() {
            return il2cpp::create_object<app::Achievement__Enum>(get_class());
        }
        inline app::Achievement__Enum__Array* create_array(int size) {
            return il2cpp::array_new<app::Achievement__Enum__Array>(get_class(), size);
        }
        inline app::Achievement__Enum__Array* create_array(const std::vector<app::Achievement__Enum*>& items) {
            return il2cpp::array_new<app::Achievement__Enum__Array>(get_class(), items);
        }
    } // namespace Achievement__Enum
} // namespace app::classes::types
