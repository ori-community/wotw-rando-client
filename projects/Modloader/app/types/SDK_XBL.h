#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SDK_XBL__Class.h>
#include <Modloader/app/structs/SDK_XBL.h>

namespace app::classes::types {
    namespace SDK_XBL {
        namespace {
            inline app::SDK_XBL__Class* type_info_ref = nullptr;
        }
        inline app::SDK_XBL__Class** type_info = &type_info_ref;
        inline app::SDK_XBL__Class* get_class() {
            return il2cpp::get_nested_class<app::SDK_XBL__Class>(type_info, "XGamingRuntime", "SDK", "XBL");
        }
        inline app::SDK_XBL* create() {
            return il2cpp::create_object<app::SDK_XBL>(get_class());
        }
    } // namespace SDK_XBL
} // namespace app::classes::types
