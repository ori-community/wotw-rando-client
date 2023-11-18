#pragma once
#include <Modloader/app/structs/FlagsFieldAttribute.h>
#include <Modloader/app/structs/FlagsFieldAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FlagsFieldAttribute {
        inline app::FlagsFieldAttribute__Class** type_info() {
            static app::FlagsFieldAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::FlagsFieldAttribute__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::FlagsFieldAttribute__Class* get_class() {
            return il2cpp::get_class<app::FlagsFieldAttribute__Class>(type_info(), "ZenFulcrum.EmbeddedBrowser", "FlagsFieldAttribute");
        }
        inline app::FlagsFieldAttribute* create() {
            return il2cpp::create_object<app::FlagsFieldAttribute>(get_class());
        }
    } // namespace FlagsFieldAttribute
} // namespace app::classes::types
