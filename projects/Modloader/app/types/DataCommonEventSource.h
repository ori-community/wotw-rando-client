#pragma once
#include <Modloader/app/structs/DataCommonEventSource.h>
#include <Modloader/app/structs/DataCommonEventSource__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DataCommonEventSource {
        inline app::DataCommonEventSource__Class** type_info() {
            static app::DataCommonEventSource__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DataCommonEventSource__Class**)(modloader::win::memory::resolve_rva(0x047203D0));
            }
            return cache;
        }
        inline app::DataCommonEventSource__Class* get_class() {
            return il2cpp::get_class<app::DataCommonEventSource__Class>(type_info(), "System.Data", "DataCommonEventSource");
        }
        inline app::DataCommonEventSource* create() {
            return il2cpp::create_object<app::DataCommonEventSource>(get_class());
        }
    } // namespace DataCommonEventSource
} // namespace app::classes::types
