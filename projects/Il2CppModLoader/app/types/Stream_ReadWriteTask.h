#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Stream_ReadWriteTask {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Stream_ReadWriteTask__Class** type_info;
        inline app::Stream_ReadWriteTask__Class* get_class() {
            return il2cpp::get_nested_class<app::Stream_ReadWriteTask__Class>(type_info, "System.IO", "Stream", "ReadWriteTask");
        }
        inline app::Stream_ReadWriteTask* create() {
            return il2cpp::create_object<app::Stream_ReadWriteTask>(get_class());
        }
    } // namespace Stream_ReadWriteTask
} // namespace app::classes::types
