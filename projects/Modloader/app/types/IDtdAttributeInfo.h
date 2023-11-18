#pragma once
#include <Modloader/app/structs/IDtdAttributeInfo.h>
#include <Modloader/app/structs/IDtdAttributeInfo__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IDtdAttributeInfo {
        inline app::IDtdAttributeInfo__Class** type_info() {
            static app::IDtdAttributeInfo__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IDtdAttributeInfo__Class**)(modloader::win::memory::resolve_rva(0x0474FC28));
            }
            return cache;
        }
        inline app::IDtdAttributeInfo__Class* get_class() {
            return il2cpp::get_class<app::IDtdAttributeInfo__Class>(type_info(), "System.Xml", "IDtdAttributeInfo");
        }
    } // namespace IDtdAttributeInfo
} // namespace app::classes::types
