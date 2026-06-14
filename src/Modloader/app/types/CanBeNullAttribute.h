#pragma once
#include <Modloader/app/structs/CanBeNullAttribute.h>
#include <Modloader/app/structs/CanBeNullAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CanBeNullAttribute {
        inline app::CanBeNullAttribute__Class** type_info() {
            static app::CanBeNullAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CanBeNullAttribute__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CanBeNullAttribute__Class* get_class() {
            return il2cpp::get_class<app::CanBeNullAttribute__Class>(type_info(), "JetBrains.Annotations", "CanBeNullAttribute");
        }
        inline app::CanBeNullAttribute* create() {
            return il2cpp::create_object<app::CanBeNullAttribute>(get_class());
        }
    } // namespace CanBeNullAttribute
} // namespace app::classes::types
