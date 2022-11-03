#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace DynamicDataExportClassAttribute {
        inline app::DynamicDataExportClassAttribute__Class** type_info = (app::DynamicDataExportClassAttribute__Class**)(modloader::win::memory::resolve_rva(0x0471BCD8));
        inline app::DynamicDataExportClassAttribute__Class* get_class() {
            return il2cpp::get_class<app::DynamicDataExportClassAttribute__Class>(type_info, "Moon", "DynamicDataExportClassAttribute");
        }
        inline app::DynamicDataExportClassAttribute* create() {
            return il2cpp::create_object<app::DynamicDataExportClassAttribute>(get_class());
        }
    } // namespace DynamicDataExportClassAttribute
} // namespace app::classes::types
