#pragma once
#include <Modloader/app/structs/SpiderBatDeathReaction_c.h>
#include <Modloader/app/structs/SpiderBatDeathReaction_c__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpiderBatDeathReaction_c {
        inline app::SpiderBatDeathReaction_c__Class** type_info() {
            static app::SpiderBatDeathReaction_c__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SpiderBatDeathReaction_c__Class**)(modloader::win::memory::resolve_rva(0x04753350));
            }
            return cache;
        }
        inline app::SpiderBatDeathReaction_c__Class* get_class() {
            return il2cpp::get_nested_class<app::SpiderBatDeathReaction_c__Class>(type_info(), "", "SpiderBatDeathReaction", "<>c");
        }
        inline app::SpiderBatDeathReaction_c* create() {
            return il2cpp::create_object<app::SpiderBatDeathReaction_c>(get_class());
        }
    } // namespace SpiderBatDeathReaction_c
} // namespace app::classes::types
