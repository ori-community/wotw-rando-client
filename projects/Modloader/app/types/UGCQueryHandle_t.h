#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace UGCQueryHandle_t {
        inline app::UGCQueryHandle_t__Class** type_info = (app::UGCQueryHandle_t__Class**)(modloader::win::memory::resolve_rva(0x04740B78));
        inline app::UGCQueryHandle_t__Class* get_class() {
            return il2cpp::get_class<app::UGCQueryHandle_t__Class>(type_info, "Steamworks", "UGCQueryHandle_t");
        }
        inline app::UGCQueryHandle_t* create() {
            return il2cpp::create_object<app::UGCQueryHandle_t>(get_class());
        }
        inline app::UGCQueryHandle_t__Boxed* box(app::UGCQueryHandle_t value) {
            return il2cpp::box_value<app::UGCQueryHandle_t__Boxed>(get_class(), value);
        }
    } // namespace UGCQueryHandle_t
} // namespace app::classes::types
