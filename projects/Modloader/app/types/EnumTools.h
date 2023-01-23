#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/EnumTools__Class.h>
#include <Modloader/app/structs/EnumTools.h>

namespace app::classes::types {
    namespace EnumTools {
        inline app::EnumTools__Class** type_info = (app::EnumTools__Class**)(modloader::win::memory::resolve_rva(0x04752638));
        inline app::EnumTools__Class* get_class() {
            return il2cpp::get_class<app::EnumTools__Class>(type_info, "", "EnumTools");
        }
        inline app::EnumTools* create() {
            return il2cpp::create_object<app::EnumTools>(get_class());
        }
    } // namespace EnumTools
} // namespace app::classes::types
