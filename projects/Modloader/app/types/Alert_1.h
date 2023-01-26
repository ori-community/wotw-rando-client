#pragma once
#include <Modloader/app/structs/Alert_1.h>
#include <Modloader/app/structs/Alert_1__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Alert_1 {
        inline app::Alert_1__Class** type_info() {
            static app::Alert_1__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Alert_1__Class**)(modloader::win::memory::resolve_rva(0x0474C888));
            }
            return cache;
        }
        inline app::Alert_1__Class* get_class() {
            return il2cpp::get_class<app::Alert_1__Class>(type_info(), "Mono.Security.Interface", "Alert");
        }
        inline app::Alert_1* create() {
            return il2cpp::create_object<app::Alert_1>(get_class());
        }
    } // namespace Alert_1
} // namespace app::classes::types
