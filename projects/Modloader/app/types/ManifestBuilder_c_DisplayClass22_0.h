#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ManifestBuilder_c_DisplayClass22_0 {
        inline app::ManifestBuilder_c_DisplayClass22_0__Class** type_info = (app::ManifestBuilder_c_DisplayClass22_0__Class**)(modloader::win::memory::resolve_rva(0x047092E8));
        inline app::ManifestBuilder_c_DisplayClass22_0__Class* get_class() {
            return il2cpp::get_nested_class<app::ManifestBuilder_c_DisplayClass22_0__Class>(type_info, "System.Diagnostics.Tracing", "ManifestBuilder", "<>c__DisplayClass22_0");
        }
        inline app::ManifestBuilder_c_DisplayClass22_0* create() {
            return il2cpp::create_object<app::ManifestBuilder_c_DisplayClass22_0>(get_class());
        }
    } // namespace ManifestBuilder_c_DisplayClass22_0
} // namespace app::classes::types
