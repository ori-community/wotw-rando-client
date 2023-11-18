#pragma once
#include <Modloader/app/structs/AllowPartiallyTrustedCallersAttribute.h>
#include <Modloader/app/structs/AllowPartiallyTrustedCallersAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AllowPartiallyTrustedCallersAttribute {
        inline app::AllowPartiallyTrustedCallersAttribute__Class** type_info() {
            static app::AllowPartiallyTrustedCallersAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AllowPartiallyTrustedCallersAttribute__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AllowPartiallyTrustedCallersAttribute__Class* get_class() {
            return il2cpp::get_class<app::AllowPartiallyTrustedCallersAttribute__Class>(type_info(), "System.Security", "AllowPartiallyTrustedCallersAttribute");
        }
        inline app::AllowPartiallyTrustedCallersAttribute* create() {
            return il2cpp::create_object<app::AllowPartiallyTrustedCallersAttribute>(get_class());
        }
    } // namespace AllowPartiallyTrustedCallersAttribute
} // namespace app::classes::types
