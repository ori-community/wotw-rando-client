#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace fsMetaType_c_DisplayClass8_0 {
        inline app::fsMetaType_c_DisplayClass8_0__Class** type_info = (app::fsMetaType_c_DisplayClass8_0__Class**)(modloader::win::memory::resolve_rva(0x04727AD8));
        inline app::fsMetaType_c_DisplayClass8_0__Class* get_class() {
            return il2cpp::get_nested_class<app::fsMetaType_c_DisplayClass8_0__Class>(type_info, "FullSerializer", "fsMetaType", "<>c__DisplayClass8_0");
        }
        inline app::fsMetaType_c_DisplayClass8_0* create() {
            return il2cpp::create_object<app::fsMetaType_c_DisplayClass8_0>(get_class());
        }
    } // namespace fsMetaType_c_DisplayClass8_0
} // namespace app::classes::types
