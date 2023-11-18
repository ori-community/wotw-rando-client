#pragma once
#include <Modloader/app/structs/CFArray.h>
#include <Modloader/app/structs/CFArray__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CFArray {
        inline app::CFArray__Class** type_info() {
            static app::CFArray__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CFArray__Class**)(modloader::win::memory::resolve_rva(0x0477FA38));
            }
            return cache;
        }
        inline app::CFArray__Class* get_class() {
            return il2cpp::get_class<app::CFArray__Class>(type_info(), "Mono.Net", "CFArray");
        }
        inline app::CFArray* create() {
            return il2cpp::create_object<app::CFArray>(get_class());
        }
    } // namespace CFArray
} // namespace app::classes::types
