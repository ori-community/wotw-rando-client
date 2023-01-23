#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/UGCHandle_t__Class.h>
#include <Modloader/app/structs/UGCHandle_t.h>
#include <Modloader/app/structs/UGCHandle_t__Boxed.h>

namespace app::classes::types {
    namespace UGCHandle_t {
        inline app::UGCHandle_t__Class** type_info = (app::UGCHandle_t__Class**)(modloader::win::memory::resolve_rva(0x04729B68));
        inline app::UGCHandle_t__Class* get_class() {
            return il2cpp::get_class<app::UGCHandle_t__Class>(type_info, "Steamworks", "UGCHandle_t");
        }
        inline app::UGCHandle_t* create() {
            return il2cpp::create_object<app::UGCHandle_t>(get_class());
        }
        inline app::UGCHandle_t__Boxed* box(app::UGCHandle_t value) {
            return il2cpp::box_value<app::UGCHandle_t__Boxed>(get_class(), value);
        }
    } // namespace UGCHandle_t
} // namespace app::classes::types
