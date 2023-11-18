#pragma once
#include <Modloader/app/structs/IDtdInfo.h>
#include <Modloader/app/structs/IDtdInfo__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IDtdInfo {
        inline app::IDtdInfo__Class** type_info() {
            static app::IDtdInfo__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IDtdInfo__Class**)(modloader::win::memory::resolve_rva(0x047991B0));
            }
            return cache;
        }
        inline app::IDtdInfo__Class* get_class() {
            return il2cpp::get_class<app::IDtdInfo__Class>(type_info(), "System.Xml", "IDtdInfo");
        }
    } // namespace IDtdInfo
} // namespace app::classes::types
