#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SecurityBufferStruct {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SecurityBufferStruct__Class** type_info;
        inline app::SecurityBufferStruct__Class* get_class() {
            return il2cpp::get_class<app::SecurityBufferStruct__Class>(type_info, "System.Net", "SecurityBufferStruct");
        }
        inline app::SecurityBufferStruct* create() {
            return il2cpp::create_object<app::SecurityBufferStruct>(get_class());
        }
        inline app::SecurityBufferStruct__Boxed* box(app::SecurityBufferStruct value) {
            return il2cpp::box_value<app::SecurityBufferStruct__Boxed>(get_class(), value);
        }
    } // namespace SecurityBufferStruct
} // namespace app::classes::types
