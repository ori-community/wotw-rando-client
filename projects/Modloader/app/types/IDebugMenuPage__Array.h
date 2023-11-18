#pragma once
#include <Modloader/app/structs/IDebugMenuPage__Array.h>
#include <Modloader/app/structs/IDebugMenuPage__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IDebugMenuPage__Array {
        inline app::IDebugMenuPage__Array__Class** type_info() {
            static app::IDebugMenuPage__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::IDebugMenuPage__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::IDebugMenuPage__Array__Class* get_class() {
            return il2cpp::get_class<app::IDebugMenuPage__Array__Class>(type_info(), "", "IDebugMenuPage[]");
        }
        inline app::IDebugMenuPage__Array* create() {
            return il2cpp::create_object<app::IDebugMenuPage__Array>(get_class());
        }
    } // namespace IDebugMenuPage__Array
} // namespace app::classes::types
