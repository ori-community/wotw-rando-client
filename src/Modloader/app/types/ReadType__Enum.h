#pragma once
#include <Modloader/app/structs/ReadType__Enum.h>
#include <Modloader/app/structs/ReadType__Enum__Array.h>
#include <Modloader/app/structs/ReadType__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ReadType__Enum {
        inline app::ReadType__Enum__Class** type_info() {
            static app::ReadType__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ReadType__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ReadType__Enum__Class* get_class() {
            return il2cpp::get_class<app::ReadType__Enum__Class>(type_info(), "Newtonsoft.Json", "ReadType");
        }
        inline app::ReadType__Enum* create() {
            return il2cpp::create_object<app::ReadType__Enum>(get_class());
        }
        inline app::ReadType__Enum__Array* create_array(int size) {
            return il2cpp::array_new<app::ReadType__Enum__Array>(get_class(), size);
        }
        inline app::ReadType__Enum__Array* create_array(const std::vector<app::ReadType__Enum*>& items) {
            return il2cpp::array_new<app::ReadType__Enum__Array>(get_class(), items);
        }
    } // namespace ReadType__Enum
} // namespace app::classes::types
