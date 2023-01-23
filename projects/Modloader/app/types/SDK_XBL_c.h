#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SDK_XBL_c__Class.h>
#include <Modloader/app/structs/SDK_XBL_c.h>

namespace app::classes::types {
    namespace SDK_XBL_c {
        inline app::SDK_XBL_c__Class** type_info = (app::SDK_XBL_c__Class**)(modloader::win::memory::resolve_rva(0x047561F0));
        inline app::SDK_XBL_c__Class* get_class() {
            return il2cpp::get_nested_class<app::SDK_XBL_c__Class>(type_info, "XGamingRuntime", "SDK+XBL", "<>c");
        }
        inline app::SDK_XBL_c* create() {
            return il2cpp::create_object<app::SDK_XBL_c>(get_class());
        }
    } // namespace SDK_XBL_c
} // namespace app::classes::types
