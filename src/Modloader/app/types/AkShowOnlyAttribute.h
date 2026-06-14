#pragma once
#include <Modloader/app/structs/AkShowOnlyAttribute.h>
#include <Modloader/app/structs/AkShowOnlyAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AkShowOnlyAttribute {
        inline app::AkShowOnlyAttribute__Class** type_info() {
            static app::AkShowOnlyAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AkShowOnlyAttribute__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AkShowOnlyAttribute__Class* get_class() {
            return il2cpp::get_class<app::AkShowOnlyAttribute__Class>(type_info(), "", "AkShowOnlyAttribute");
        }
        inline app::AkShowOnlyAttribute* create() {
            return il2cpp::create_object<app::AkShowOnlyAttribute>(get_class());
        }
    } // namespace AkShowOnlyAttribute
} // namespace app::classes::types
