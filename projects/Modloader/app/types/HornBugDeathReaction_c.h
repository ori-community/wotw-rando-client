#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace HornBugDeathReaction_c {
        inline app::HornBugDeathReaction_c__Class** type_info = (app::HornBugDeathReaction_c__Class**)(modloader::win::memory::resolve_rva(0x04717208));
        inline app::HornBugDeathReaction_c__Class* get_class() {
            return il2cpp::get_nested_class<app::HornBugDeathReaction_c__Class>(type_info, "", "HornBugDeathReaction", "<>c");
        }
        inline app::HornBugDeathReaction_c* create() {
            return il2cpp::create_object<app::HornBugDeathReaction_c>(get_class());
        }
    } // namespace HornBugDeathReaction_c
} // namespace app::classes::types
