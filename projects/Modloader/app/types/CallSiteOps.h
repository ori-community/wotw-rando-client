#pragma once
#include <Modloader/app/structs/CallSiteOps.h>
#include <Modloader/app/structs/CallSiteOps__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CallSiteOps {
        inline app::CallSiteOps__Class** type_info() {
            static app::CallSiteOps__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CallSiteOps__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CallSiteOps__Class* get_class() {
            return il2cpp::get_class<app::CallSiteOps__Class>(type_info(), "System.Runtime.CompilerServices", "CallSiteOps");
        }
        inline app::CallSiteOps* create() {
            return il2cpp::create_object<app::CallSiteOps>(get_class());
        }
    } // namespace CallSiteOps
} // namespace app::classes::types
