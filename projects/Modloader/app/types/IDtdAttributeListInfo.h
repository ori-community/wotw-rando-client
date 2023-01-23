#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/IDtdAttributeListInfo__Class.h>

namespace app::classes::types {
    namespace IDtdAttributeListInfo {
        inline app::IDtdAttributeListInfo__Class** type_info = (app::IDtdAttributeListInfo__Class**)(modloader::win::memory::resolve_rva(0x0473F4D0));
        inline app::IDtdAttributeListInfo__Class* get_class() {
            return il2cpp::get_class<app::IDtdAttributeListInfo__Class>(type_info, "System.Xml", "IDtdAttributeListInfo");
        }
    } // namespace IDtdAttributeListInfo
} // namespace app::classes::types
