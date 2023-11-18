#pragma once
#include <Modloader/app/structs/InitializationEventAttribute.h>
#include <Modloader/app/structs/InitializationEventAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace InitializationEventAttribute {
        inline app::InitializationEventAttribute__Class** type_info() {
            static app::InitializationEventAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::InitializationEventAttribute__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::InitializationEventAttribute__Class* get_class() {
            return il2cpp::get_class<app::InitializationEventAttribute__Class>(type_info(), "System.ComponentModel", "InitializationEventAttribute");
        }
        inline app::InitializationEventAttribute* create() {
            return il2cpp::create_object<app::InitializationEventAttribute>(get_class());
        }
    } // namespace InitializationEventAttribute
} // namespace app::classes::types
