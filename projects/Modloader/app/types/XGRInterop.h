#pragma once
#include <Modloader/app/structs/XGRInterop.h>
#include <Modloader/app/structs/XGRInterop__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XGRInterop {
        inline app::XGRInterop__Class** type_info() {
            static app::XGRInterop__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::XGRInterop__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::XGRInterop__Class* get_class() {
            return il2cpp::get_class<app::XGRInterop__Class>(type_info(), "XGamingRuntime.Interop", "XGRInterop");
        }
        inline app::XGRInterop* create() {
            return il2cpp::create_object<app::XGRInterop>(get_class());
        }
    } // namespace XGRInterop
} // namespace app::classes::types
