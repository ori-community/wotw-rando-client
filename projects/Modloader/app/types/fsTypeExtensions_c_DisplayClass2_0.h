#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace fsTypeExtensions_c_DisplayClass2_0 {
        inline app::fsTypeExtensions_c_DisplayClass2_0__Class** type_info = (app::fsTypeExtensions_c_DisplayClass2_0__Class**)(modloader::win::memory::resolve_rva(0x04786510));
        inline app::fsTypeExtensions_c_DisplayClass2_0__Class* get_class() {
            return il2cpp::get_nested_class<app::fsTypeExtensions_c_DisplayClass2_0__Class>(type_info, "FullSerializer", "fsTypeExtensions", "<>c__DisplayClass2_0");
        }
        inline app::fsTypeExtensions_c_DisplayClass2_0* create() {
            return il2cpp::create_object<app::fsTypeExtensions_c_DisplayClass2_0>(get_class());
        }
    } // namespace fsTypeExtensions_c_DisplayClass2_0
} // namespace app::classes::types
