#pragma once
#include <Modloader/app/structs/fsMetaType_c_DisplayClass8_0.h>
#include <Modloader/app/structs/fsMetaType_c_DisplayClass8_0__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace fsMetaType_c_DisplayClass8_0 {
        inline app::fsMetaType_c_DisplayClass8_0__Class** type_info() {
            static app::fsMetaType_c_DisplayClass8_0__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::fsMetaType_c_DisplayClass8_0__Class**)(modloader::win::memory::resolve_rva(0x04727AD8));
            }
            return cache;
        }
        inline app::fsMetaType_c_DisplayClass8_0__Class* get_class() {
            return il2cpp::get_nested_class<app::fsMetaType_c_DisplayClass8_0__Class>(type_info(), "FullSerializer", "fsMetaType", "<>c__DisplayClass8_0");
        }
        inline app::fsMetaType_c_DisplayClass8_0* create() {
            return il2cpp::create_object<app::fsMetaType_c_DisplayClass8_0>(get_class());
        }
    } // namespace fsMetaType_c_DisplayClass8_0
} // namespace app::classes::types
