#pragma once
#include <Modloader/app/structs/UGCFileWriteStreamHandle_t.h>
#include <Modloader/app/structs/UGCFileWriteStreamHandle_t__Boxed.h>
#include <Modloader/app/structs/UGCFileWriteStreamHandle_t__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UGCFileWriteStreamHandle_t {
        inline app::UGCFileWriteStreamHandle_t__Class** type_info() {
            static app::UGCFileWriteStreamHandle_t__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::UGCFileWriteStreamHandle_t__Class**)(modloader::win::memory::resolve_rva(0x04733E88));
            }
            return cache;
        }
        inline app::UGCFileWriteStreamHandle_t__Class* get_class() {
            return il2cpp::get_class<app::UGCFileWriteStreamHandle_t__Class>(type_info(), "Steamworks", "UGCFileWriteStreamHandle_t");
        }
        inline app::UGCFileWriteStreamHandle_t* create() {
            return il2cpp::create_object<app::UGCFileWriteStreamHandle_t>(get_class());
        }
        inline app::UGCFileWriteStreamHandle_t__Boxed* box(app::UGCFileWriteStreamHandle_t value) {
            return il2cpp::box_value<app::UGCFileWriteStreamHandle_t__Boxed>(get_class(), value);
        }
    } // namespace UGCFileWriteStreamHandle_t
} // namespace app::classes::types
