#pragma once
#include <Modloader/app/structs/GhostTimeTrackingPlugin_Data.h>
#include <Modloader/app/structs/GhostTimeTrackingPlugin_Data__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GhostTimeTrackingPlugin_Data {
        inline app::GhostTimeTrackingPlugin_Data__Class** type_info() {
            static app::GhostTimeTrackingPlugin_Data__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GhostTimeTrackingPlugin_Data__Class**)(modloader::win::memory::resolve_rva(0x04730608));
            }
            return cache;
        }
        inline app::GhostTimeTrackingPlugin_Data__Class* get_class() {
            return il2cpp::get_nested_class<app::GhostTimeTrackingPlugin_Data__Class>(type_info(), "", "GhostTimeTrackingPlugin", "Data");
        }
        inline app::GhostTimeTrackingPlugin_Data* create() {
            return il2cpp::create_object<app::GhostTimeTrackingPlugin_Data>(get_class());
        }
    } // namespace GhostTimeTrackingPlugin_Data
} // namespace app::classes::types
