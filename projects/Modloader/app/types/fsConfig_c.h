#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace fsConfig_c {
        inline app::fsConfig_c__Class** type_info = (app::fsConfig_c__Class**)(modloader::win::memory::resolve_rva(0x04735B30));
        inline app::fsConfig_c__Class* get_class() {
            return il2cpp::get_nested_class<app::fsConfig_c__Class>(type_info, "FullSerializer", "fsConfig", "<>c");
        }
        inline app::fsConfig_c* create() {
            return il2cpp::create_object<app::fsConfig_c>(get_class());
        }
    } // namespace fsConfig_c
} // namespace app::classes::types
