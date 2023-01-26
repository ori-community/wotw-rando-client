#pragma once
#include <Modloader/app/structs/Stream_ReadWriteParameters.h>
#include <Modloader/app/structs/Stream_ReadWriteParameters__Boxed.h>
#include <Modloader/app/structs/Stream_ReadWriteParameters__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Stream_ReadWriteParameters {
        inline app::Stream_ReadWriteParameters__Class** type_info() {
            static app::Stream_ReadWriteParameters__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Stream_ReadWriteParameters__Class**)(modloader::win::memory::resolve_rva(0x04747290));
            }
            return cache;
        }
        inline app::Stream_ReadWriteParameters__Class* get_class() {
            return il2cpp::get_nested_class<app::Stream_ReadWriteParameters__Class>(type_info(), "System.IO", "Stream", "ReadWriteParameters");
        }
        inline app::Stream_ReadWriteParameters* create() {
            return il2cpp::create_object<app::Stream_ReadWriteParameters>(get_class());
        }
        inline app::Stream_ReadWriteParameters__Boxed* box(app::Stream_ReadWriteParameters value) {
            return il2cpp::box_value<app::Stream_ReadWriteParameters__Boxed>(get_class(), value);
        }
    } // namespace Stream_ReadWriteParameters
} // namespace app::classes::types
