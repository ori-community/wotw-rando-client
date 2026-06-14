#pragma once
#include <Modloader/app/structs/CallSite.h>
#include <Modloader/app/structs/CallSite__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CallSite {
        inline app::CallSite__Class** type_info() {
            static app::CallSite__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CallSite__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CallSite__Class* get_class() {
            return il2cpp::get_class<app::CallSite__Class>(type_info(), "System.Runtime.CompilerServices", "CallSite");
        }
        inline app::CallSite* create() {
            return il2cpp::create_object<app::CallSite>(get_class());
        }
    } // namespace CallSite
} // namespace app::classes::types
