#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/fsMetaType_c_DisplayClass7_0__Class.h>
#include <Modloader/app/structs/fsMetaType_c_DisplayClass7_0.h>

namespace app::classes::types {
    namespace fsMetaType_c_DisplayClass7_0 {
        inline app::fsMetaType_c_DisplayClass7_0__Class** type_info = (app::fsMetaType_c_DisplayClass7_0__Class**)(modloader::win::memory::resolve_rva(0x04706E58));
        inline app::fsMetaType_c_DisplayClass7_0__Class* get_class() {
            return il2cpp::get_nested_class<app::fsMetaType_c_DisplayClass7_0__Class>(type_info, "FullSerializer", "fsMetaType", "<>c__DisplayClass7_0");
        }
        inline app::fsMetaType_c_DisplayClass7_0* create() {
            return il2cpp::create_object<app::fsMetaType_c_DisplayClass7_0>(get_class());
        }
    } // namespace fsMetaType_c_DisplayClass7_0
} // namespace app::classes::types
