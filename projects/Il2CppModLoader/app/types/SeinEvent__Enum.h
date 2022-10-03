#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SeinEvent__Enum {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SeinEvent__Enum__Class** type_info;
        inline app::SeinEvent__Enum__Class* get_class() {
            return il2cpp::get_class<app::SeinEvent__Enum__Class>(type_info, "", "SeinEvent");
        }
        inline app::SeinEvent__Enum* create() {
            return il2cpp::create_object<app::SeinEvent__Enum>(get_class());
        }
        inline app::SeinEvent__Enum__Array* create_array(int size) {
            return il2cpp::array_new<app::SeinEvent__Enum__Array>(get_class(), size);
        }
    } // namespace SeinEvent__Enum
} // namespace app::classes::types
