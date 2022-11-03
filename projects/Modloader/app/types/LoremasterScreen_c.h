#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace LoremasterScreen_c {
        inline app::LoremasterScreen_c__Class** type_info = (app::LoremasterScreen_c__Class**)(modloader::win::memory::resolve_rva(0x04733F30));
        inline app::LoremasterScreen_c__Class* get_class() {
            return il2cpp::get_nested_class<app::LoremasterScreen_c__Class>(type_info, "", "LoremasterScreen", "<>c");
        }
        inline app::LoremasterScreen_c* create() {
            return il2cpp::create_object<app::LoremasterScreen_c>(get_class());
        }
    } // namespace LoremasterScreen_c
} // namespace app::classes::types
