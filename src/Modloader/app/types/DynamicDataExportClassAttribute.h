#pragma once
#include <Modloader/app/structs/DynamicDataExportClassAttribute.h>
#include <Modloader/app/structs/DynamicDataExportClassAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DynamicDataExportClassAttribute {
        inline app::DynamicDataExportClassAttribute__Class** type_info() {
            static app::DynamicDataExportClassAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DynamicDataExportClassAttribute__Class**)(modloader::win::memory::resolve_rva(0x0471BCD8));
            }
            return cache;
        }
        inline app::DynamicDataExportClassAttribute__Class* get_class() {
            return il2cpp::get_class<app::DynamicDataExportClassAttribute__Class>(type_info(), "Moon", "DynamicDataExportClassAttribute");
        }
        inline app::DynamicDataExportClassAttribute* create() {
            return il2cpp::create_object<app::DynamicDataExportClassAttribute>(get_class());
        }
    } // namespace DynamicDataExportClassAttribute
} // namespace app::classes::types
