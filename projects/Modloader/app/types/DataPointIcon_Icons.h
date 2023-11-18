#pragma once
#include <Modloader/app/structs/DataPointIcon_Icons.h>
#include <Modloader/app/structs/DataPointIcon_Icons__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DataPointIcon_Icons {
        inline app::DataPointIcon_Icons__Class** type_info() {
            static app::DataPointIcon_Icons__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DataPointIcon_Icons__Class**)(modloader::win::memory::resolve_rva(0x0470E6B8));
            }
            return cache;
        }
        inline app::DataPointIcon_Icons__Class* get_class() {
            return il2cpp::get_nested_class<app::DataPointIcon_Icons__Class>(type_info(), "Moon.Telemetry", "DataPointIcon", "Icons");
        }
        inline app::DataPointIcon_Icons* create() {
            return il2cpp::create_object<app::DataPointIcon_Icons>(get_class());
        }
    } // namespace DataPointIcon_Icons
} // namespace app::classes::types
