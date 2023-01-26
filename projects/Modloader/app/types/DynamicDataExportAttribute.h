#pragma once
#include <Modloader/app/structs/DynamicDataExportAttribute.h>
#include <Modloader/app/structs/DynamicDataExportAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DynamicDataExportAttribute {
        inline app::DynamicDataExportAttribute__Class** type_info() {
            static app::DynamicDataExportAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DynamicDataExportAttribute__Class**)(modloader::win::memory::resolve_rva(0x0476D240));
            }
            return cache;
        }
        inline app::DynamicDataExportAttribute__Class* get_class() {
            return il2cpp::get_class<app::DynamicDataExportAttribute__Class>(type_info(), "Moon", "DynamicDataExportAttribute");
        }
        inline app::DynamicDataExportAttribute* create() {
            return il2cpp::create_object<app::DynamicDataExportAttribute>(get_class());
        }
    } // namespace DynamicDataExportAttribute
} // namespace app::classes::types
