#pragma once
#include <Modloader/app/structs/Water3.h>
#include <Modloader/app/structs/Water3__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Water3 {
        inline app::Water3__Class** type_info() {
            static app::Water3__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Water3__Class**)(modloader::win::memory::resolve_rva(0x047639A8));
            }
            return cache;
        }
        inline app::Water3__Class* get_class() {
            return il2cpp::get_class<app::Water3__Class>(type_info(), "", "Water3");
        }
        inline app::Water3* create() {
            return il2cpp::create_object<app::Water3>(get_class());
        }
    } // namespace Water3
} // namespace app::classes::types
