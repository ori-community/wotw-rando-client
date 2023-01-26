#pragma once
#include <Modloader/app/structs/EmbeddedAttribute.h>
#include <Modloader/app/structs/EmbeddedAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EmbeddedAttribute {
        inline app::EmbeddedAttribute__Class** type_info() {
            static app::EmbeddedAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::EmbeddedAttribute__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::EmbeddedAttribute__Class* get_class() {
            return il2cpp::get_class<app::EmbeddedAttribute__Class>(type_info(), "Microsoft.CodeAnalysis", "EmbeddedAttribute");
        }
        inline app::EmbeddedAttribute* create() {
            return il2cpp::create_object<app::EmbeddedAttribute>(get_class());
        }
    } // namespace EmbeddedAttribute
} // namespace app::classes::types
