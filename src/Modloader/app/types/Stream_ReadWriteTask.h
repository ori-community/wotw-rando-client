#pragma once
#include <Modloader/app/structs/Stream_ReadWriteTask.h>
#include <Modloader/app/structs/Stream_ReadWriteTask__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Stream_ReadWriteTask {
        inline app::Stream_ReadWriteTask__Class** type_info() {
            static app::Stream_ReadWriteTask__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Stream_ReadWriteTask__Class**)(modloader::win::memory::resolve_rva(0x04781BE8));
            }
            return cache;
        }
        inline app::Stream_ReadWriteTask__Class* get_class() {
            return il2cpp::get_nested_class<app::Stream_ReadWriteTask__Class>(type_info(), "System.IO", "Stream", "ReadWriteTask");
        }
        inline app::Stream_ReadWriteTask* create() {
            return il2cpp::create_object<app::Stream_ReadWriteTask>(get_class());
        }
    } // namespace Stream_ReadWriteTask
} // namespace app::classes::types
