#pragma once
#include <Modloader/app/structs/Browser__Array.h>
#include <Modloader/app/structs/Browser__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Browser__Array {
        inline app::Browser__Array__Class** type_info() {
            static app::Browser__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Browser__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Browser__Array__Class* get_class() {
            return il2cpp::get_class<app::Browser__Array__Class>(type_info(), "ZenFulcrum.EmbeddedBrowser", "Browser[]");
        }
        inline app::Browser__Array* create() {
            return il2cpp::create_object<app::Browser__Array>(get_class());
        }
    } // namespace Browser__Array
} // namespace app::classes::types
