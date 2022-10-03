#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Number_NumberBuffer {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Number_NumberBuffer__Class** type_info;
        inline app::Number_NumberBuffer__Class* get_class() {
            return il2cpp::get_nested_class<app::Number_NumberBuffer__Class>(type_info, "System", "Number", "NumberBuffer");
        }
        inline app::Number_NumberBuffer* create() {
            return il2cpp::create_object<app::Number_NumberBuffer>(get_class());
        }
        inline app::Number_NumberBuffer__Boxed* box(app::Number_NumberBuffer value) {
            return il2cpp::box_value<app::Number_NumberBuffer__Boxed>(get_class(), value);
        }
    } // namespace Number_NumberBuffer
} // namespace app::classes::types
