#pragma once
#include <Modloader/app/structs/SDK_XBL.h>
#include <Modloader/app/structs/SDK_XBL__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SDK_XBL {
        inline app::SDK_XBL__Class** type_info() {
            static app::SDK_XBL__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SDK_XBL__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SDK_XBL__Class* get_class() {
            return il2cpp::get_nested_class<app::SDK_XBL__Class>(type_info(), "XGamingRuntime", "SDK", "XBL");
        }
        inline app::SDK_XBL* create() {
            return il2cpp::create_object<app::SDK_XBL>(get_class());
        }
    } // namespace SDK_XBL
} // namespace app::classes::types
