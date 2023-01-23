#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/WispMessageIcon_Wisp__Enum__Class.h>
#include <Modloader/app/structs/WispMessageIcon_Wisp__Enum.h>

namespace app::classes::types {
    namespace WispMessageIcon_Wisp__Enum {
        inline app::WispMessageIcon_Wisp__Enum__Class** type_info = (app::WispMessageIcon_Wisp__Enum__Class**)(modloader::win::memory::resolve_rva(0x047501B0));
        inline app::WispMessageIcon_Wisp__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::WispMessageIcon_Wisp__Enum__Class>(type_info, "", "WispMessageIcon", "Wisp");
        }
        inline app::WispMessageIcon_Wisp__Enum* create() {
            return il2cpp::create_object<app::WispMessageIcon_Wisp__Enum>(get_class());
        }
    } // namespace WispMessageIcon_Wisp__Enum
} // namespace app::classes::types
