#pragma once
#include <Modloader/app/structs/CFNumber.h>
#include <Modloader/app/structs/CFNumber__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CFNumber {
        inline app::CFNumber__Class** type_info() {
            static app::CFNumber__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CFNumber__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CFNumber__Class* get_class() {
            return il2cpp::get_class<app::CFNumber__Class>(type_info(), "Mono.Net", "CFNumber");
        }
        inline app::CFNumber* create() {
            return il2cpp::create_object<app::CFNumber>(get_class());
        }
    } // namespace CFNumber
} // namespace app::classes::types
