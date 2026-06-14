#pragma once
#include <Modloader/app/structs/WriteState__Enum.h>
#include <Modloader/app/structs/WriteState__Enum__Array.h>
#include <Modloader/app/structs/WriteState__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WriteState__Enum {
        inline app::WriteState__Enum__Class** type_info() {
            static app::WriteState__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::WriteState__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::WriteState__Enum__Class* get_class() {
            return il2cpp::get_class<app::WriteState__Enum__Class>(type_info(), "System.Xml", "WriteState");
        }
        inline app::WriteState__Enum* create() {
            return il2cpp::create_object<app::WriteState__Enum>(get_class());
        }
        inline app::WriteState__Enum__Array* create_array(int size) {
            return il2cpp::array_new<app::WriteState__Enum__Array>(get_class(), size);
        }
        inline app::WriteState__Enum__Array* create_array(const std::vector<app::WriteState__Enum*>& items) {
            return il2cpp::array_new<app::WriteState__Enum__Array>(get_class(), items);
        }
    } // namespace WriteState__Enum
} // namespace app::classes::types
