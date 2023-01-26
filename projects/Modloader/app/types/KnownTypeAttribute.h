#pragma once
#include <Modloader/app/structs/KnownTypeAttribute.h>
#include <Modloader/app/structs/KnownTypeAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace KnownTypeAttribute {
        inline app::KnownTypeAttribute__Class** type_info() {
            static app::KnownTypeAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::KnownTypeAttribute__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::KnownTypeAttribute__Class* get_class() {
            return il2cpp::get_class<app::KnownTypeAttribute__Class>(type_info(), "System.Runtime.Serialization", "KnownTypeAttribute");
        }
        inline app::KnownTypeAttribute* create() {
            return il2cpp::create_object<app::KnownTypeAttribute>(get_class());
        }
    } // namespace KnownTypeAttribute
} // namespace app::classes::types
