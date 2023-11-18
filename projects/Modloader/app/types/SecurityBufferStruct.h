#pragma once
#include <Modloader/app/structs/SecurityBufferStruct.h>
#include <Modloader/app/structs/SecurityBufferStruct__Boxed.h>
#include <Modloader/app/structs/SecurityBufferStruct__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SecurityBufferStruct {
        inline app::SecurityBufferStruct__Class** type_info() {
            static app::SecurityBufferStruct__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SecurityBufferStruct__Class**)(modloader::win::memory::resolve_rva(0x0470DD68));
            }
            return cache;
        }
        inline app::SecurityBufferStruct__Class* get_class() {
            return il2cpp::get_class<app::SecurityBufferStruct__Class>(type_info(), "System.Net", "SecurityBufferStruct");
        }
        inline app::SecurityBufferStruct* create() {
            return il2cpp::create_object<app::SecurityBufferStruct>(get_class());
        }
        inline app::SecurityBufferStruct__Boxed* box(app::SecurityBufferStruct value) {
            return il2cpp::box_value<app::SecurityBufferStruct__Boxed>(get_class(), value);
        }
    } // namespace SecurityBufferStruct
} // namespace app::classes::types
