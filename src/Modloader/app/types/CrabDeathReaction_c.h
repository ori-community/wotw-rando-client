#pragma once
#include <Modloader/app/structs/CrabDeathReaction_c.h>
#include <Modloader/app/structs/CrabDeathReaction_c__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CrabDeathReaction_c {
        inline app::CrabDeathReaction_c__Class** type_info() {
            static app::CrabDeathReaction_c__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CrabDeathReaction_c__Class**)(modloader::win::memory::resolve_rva(0x0472D590));
            }
            return cache;
        }
        inline app::CrabDeathReaction_c__Class* get_class() {
            return il2cpp::get_nested_class<app::CrabDeathReaction_c__Class>(type_info(), "", "CrabDeathReaction", "<>c");
        }
        inline app::CrabDeathReaction_c* create() {
            return il2cpp::create_object<app::CrabDeathReaction_c>(get_class());
        }
    } // namespace CrabDeathReaction_c
} // namespace app::classes::types
