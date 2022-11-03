#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace BlockDamageInterruption_c {
        inline app::BlockDamageInterruption_c__Class** type_info = (app::BlockDamageInterruption_c__Class**)(modloader::win::memory::resolve_rva(0x0478D6E8));
        inline app::BlockDamageInterruption_c__Class* get_class() {
            return il2cpp::get_nested_class<app::BlockDamageInterruption_c__Class>(type_info, "Moon.Timeline", "BlockDamageInterruption", "<>c");
        }
        inline app::BlockDamageInterruption_c* create() {
            return il2cpp::create_object<app::BlockDamageInterruption_c>(get_class());
        }
    } // namespace BlockDamageInterruption_c
} // namespace app::classes::types
