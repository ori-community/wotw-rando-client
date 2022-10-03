#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Stream_ReadWriteParameters {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Stream_ReadWriteParameters__Class** type_info;
        inline app::Stream_ReadWriteParameters__Class* get_class() {
            return il2cpp::get_nested_class<app::Stream_ReadWriteParameters__Class>(type_info, "System.IO", "Stream", "ReadWriteParameters");
        }
        inline app::Stream_ReadWriteParameters* create() {
            return il2cpp::create_object<app::Stream_ReadWriteParameters>(get_class());
        }
        inline app::Stream_ReadWriteParameters__Boxed* box(app::Stream_ReadWriteParameters value) {
            return il2cpp::box_value<app::Stream_ReadWriteParameters__Boxed>(get_class(), value);
        }
    } // namespace Stream_ReadWriteParameters
} // namespace app::classes::types
