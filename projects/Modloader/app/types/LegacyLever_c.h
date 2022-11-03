#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace LegacyLever_c {
        inline app::LegacyLever_c__Class** type_info = (app::LegacyLever_c__Class**)(modloader::win::memory::resolve_rva(0x0476A8E8));
        inline app::LegacyLever_c__Class* get_class() {
            return il2cpp::get_nested_class<app::LegacyLever_c__Class>(type_info, "", "LegacyLever", "<>c");
        }
        inline app::LegacyLever_c* create() {
            return il2cpp::create_object<app::LegacyLever_c>(get_class());
        }
    } // namespace LegacyLever_c
} // namespace app::classes::types
