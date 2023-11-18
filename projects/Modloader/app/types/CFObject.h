#pragma once
#include <Modloader/app/structs/CFObject.h>
#include <Modloader/app/structs/CFObject__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CFObject {
        inline app::CFObject__Class** type_info() {
            static app::CFObject__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CFObject__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CFObject__Class* get_class() {
            return il2cpp::get_class<app::CFObject__Class>(type_info(), "Mono.Net", "CFObject");
        }
        inline app::CFObject* create() {
            return il2cpp::create_object<app::CFObject>(get_class());
        }
    } // namespace CFObject
} // namespace app::classes::types
