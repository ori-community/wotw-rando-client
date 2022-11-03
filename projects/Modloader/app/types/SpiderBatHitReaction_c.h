#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SpiderBatHitReaction_c {
        inline app::SpiderBatHitReaction_c__Class** type_info = (app::SpiderBatHitReaction_c__Class**)(modloader::win::memory::resolve_rva(0x04774FA0));
        inline app::SpiderBatHitReaction_c__Class* get_class() {
            return il2cpp::get_nested_class<app::SpiderBatHitReaction_c__Class>(type_info, "", "SpiderBatHitReaction", "<>c");
        }
        inline app::SpiderBatHitReaction_c* create() {
            return il2cpp::create_object<app::SpiderBatHitReaction_c>(get_class());
        }
    } // namespace SpiderBatHitReaction_c
} // namespace app::classes::types
