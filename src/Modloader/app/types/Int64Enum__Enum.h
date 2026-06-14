#pragma once
#include <Modloader/app/structs/Int64Enum__Enum.h>
#include <Modloader/app/structs/Int64Enum__Enum__Array.h>
#include <Modloader/app/structs/Int64Enum__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Int64Enum__Enum {
        inline app::Int64Enum__Enum__Class** type_info() {
            static app::Int64Enum__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Int64Enum__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Int64Enum__Enum__Class* get_class() {
            return il2cpp::get_class<app::Int64Enum__Enum__Class>(type_info(), "System", "Int64Enum");
        }
        inline app::Int64Enum__Enum* create() {
            return il2cpp::create_object<app::Int64Enum__Enum>(get_class());
        }
        inline app::Int64Enum__Enum__Array* create_array(int size) {
            return il2cpp::array_new<app::Int64Enum__Enum__Array>(get_class(), size);
        }
        inline app::Int64Enum__Enum__Array* create_array(const std::vector<app::Int64Enum__Enum*>& items) {
            return il2cpp::array_new<app::Int64Enum__Enum__Array>(get_class(), items);
        }
    } // namespace Int64Enum__Enum
} // namespace app::classes::types
