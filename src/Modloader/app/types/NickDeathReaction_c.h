#pragma once
#include <Modloader/app/structs/NickDeathReaction_c.h>
#include <Modloader/app/structs/NickDeathReaction_c__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace NickDeathReaction_c {
        inline app::NickDeathReaction_c__Class** type_info() {
            static app::NickDeathReaction_c__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::NickDeathReaction_c__Class**)(modloader::win::memory::resolve_rva(0x04782860));
            }
            return cache;
        }
        inline app::NickDeathReaction_c__Class* get_class() {
            return il2cpp::get_nested_class<app::NickDeathReaction_c__Class>(type_info(), "", "NickDeathReaction", "<>c");
        }
        inline app::NickDeathReaction_c* create() {
            return il2cpp::create_object<app::NickDeathReaction_c>(get_class());
        }
    } // namespace NickDeathReaction_c
} // namespace app::classes::types
