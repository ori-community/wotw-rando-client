#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ReadType__Enum {
        namespace {
            app::ReadType__Enum__Class* type_info_ref = nullptr;
        }
        app::ReadType__Enum__Class** type_info = &type_info_ref;
        inline app::ReadType__Enum__Class* get_class() {
            return il2cpp::get_class<app::ReadType__Enum__Class>(type_info, "Newtonsoft.Json", "ReadType");
        }
        inline app::ReadType__Enum* create() {
            return il2cpp::create_object<app::ReadType__Enum>(get_class());
        }
        inline app::ReadType__Enum__Array* create_array(int size) {
            return il2cpp::array_new<app::ReadType__Enum__Array>(get_class(), size);
        }
    } // namespace ReadType__Enum
} // namespace app::classes::types
