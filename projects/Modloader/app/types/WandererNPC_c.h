#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace WandererNPC_c {
        inline app::WandererNPC_c__Class** type_info = (app::WandererNPC_c__Class**)(modloader::win::memory::resolve_rva(0x04786620));
        inline app::WandererNPC_c__Class* get_class() {
            return il2cpp::get_nested_class<app::WandererNPC_c__Class>(type_info, "", "WandererNPC", "<>c");
        }
        inline app::WandererNPC_c* create() {
            return il2cpp::create_object<app::WandererNPC_c>(get_class());
        }
    } // namespace WandererNPC_c
} // namespace app::classes::types
