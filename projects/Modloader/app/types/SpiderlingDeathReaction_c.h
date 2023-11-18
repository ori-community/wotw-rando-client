#pragma once
#include <Modloader/app/structs/SpiderlingDeathReaction_c.h>
#include <Modloader/app/structs/SpiderlingDeathReaction_c__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpiderlingDeathReaction_c {
        inline app::SpiderlingDeathReaction_c__Class** type_info() {
            static app::SpiderlingDeathReaction_c__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SpiderlingDeathReaction_c__Class**)(modloader::win::memory::resolve_rva(0x04729F20));
            }
            return cache;
        }
        inline app::SpiderlingDeathReaction_c__Class* get_class() {
            return il2cpp::get_nested_class<app::SpiderlingDeathReaction_c__Class>(type_info(), "", "SpiderlingDeathReaction", "<>c");
        }
        inline app::SpiderlingDeathReaction_c* create() {
            return il2cpp::create_object<app::SpiderlingDeathReaction_c>(get_class());
        }
    } // namespace SpiderlingDeathReaction_c
} // namespace app::classes::types
