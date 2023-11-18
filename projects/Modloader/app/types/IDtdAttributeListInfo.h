#pragma once
#include <Modloader/app/structs/IDtdAttributeListInfo.h>
#include <Modloader/app/structs/IDtdAttributeListInfo__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IDtdAttributeListInfo {
        inline app::IDtdAttributeListInfo__Class** type_info() {
            static app::IDtdAttributeListInfo__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IDtdAttributeListInfo__Class**)(modloader::win::memory::resolve_rva(0x0473F4D0));
            }
            return cache;
        }
        inline app::IDtdAttributeListInfo__Class* get_class() {
            return il2cpp::get_class<app::IDtdAttributeListInfo__Class>(type_info(), "System.Xml", "IDtdAttributeListInfo");
        }
    } // namespace IDtdAttributeListInfo
} // namespace app::classes::types
