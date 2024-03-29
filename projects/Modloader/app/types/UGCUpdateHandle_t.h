#pragma once
#include <Modloader/app/structs/UGCUpdateHandle_t.h>
#include <Modloader/app/structs/UGCUpdateHandle_t__Boxed.h>
#include <Modloader/app/structs/UGCUpdateHandle_t__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UGCUpdateHandle_t {
        inline app::UGCUpdateHandle_t__Class** type_info() {
            static app::UGCUpdateHandle_t__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::UGCUpdateHandle_t__Class**)(modloader::win::memory::resolve_rva(0x047117F0));
            }
            return cache;
        }
        inline app::UGCUpdateHandle_t__Class* get_class() {
            return il2cpp::get_class<app::UGCUpdateHandle_t__Class>(type_info(), "Steamworks", "UGCUpdateHandle_t");
        }
        inline app::UGCUpdateHandle_t* create() {
            return il2cpp::create_object<app::UGCUpdateHandle_t>(get_class());
        }
        inline app::UGCUpdateHandle_t__Boxed* box(app::UGCUpdateHandle_t value) {
            return il2cpp::box_value<app::UGCUpdateHandle_t__Boxed>(get_class(), value);
        }
    } // namespace UGCUpdateHandle_t
} // namespace app::classes::types
