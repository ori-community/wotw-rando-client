#pragma once
#include <Modloader/app/structs/CameraPivotZone.h>
#include <Modloader/app/structs/CameraPivotZone__Array.h>
#include <Modloader/app/structs/CameraPivotZone__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CameraPivotZone {
        inline app::CameraPivotZone__Class** type_info() {
            static app::CameraPivotZone__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CameraPivotZone__Class**)(modloader::win::memory::resolve_rva(0x0472AEB8));
            }
            return cache;
        }
        inline app::CameraPivotZone__Class* get_class() {
            return il2cpp::get_class<app::CameraPivotZone__Class>(type_info(), "", "CameraPivotZone");
        }
        inline app::CameraPivotZone* create() {
            return il2cpp::create_object<app::CameraPivotZone>(get_class());
        }
        inline app::CameraPivotZone__Array* create_array(int size) {
            return il2cpp::array_new<app::CameraPivotZone__Array>(get_class(), size);
        }
        inline app::CameraPivotZone__Array* create_array(const std::vector<app::CameraPivotZone*>& items) {
            return il2cpp::array_new<app::CameraPivotZone__Array>(get_class(), items);
        }
    } // namespace CameraPivotZone
} // namespace app::classes::types
