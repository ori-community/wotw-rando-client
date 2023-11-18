#pragma once
#include <Modloader/app/structs/SkeetoDeathReaction_c.h>
#include <Modloader/app/structs/SkeetoDeathReaction_c__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SkeetoDeathReaction_c {
        inline app::SkeetoDeathReaction_c__Class** type_info() {
            static app::SkeetoDeathReaction_c__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SkeetoDeathReaction_c__Class**)(modloader::win::memory::resolve_rva(0x04723028));
            }
            return cache;
        }
        inline app::SkeetoDeathReaction_c__Class* get_class() {
            return il2cpp::get_nested_class<app::SkeetoDeathReaction_c__Class>(type_info(), "", "SkeetoDeathReaction", "<>c");
        }
        inline app::SkeetoDeathReaction_c* create() {
            return il2cpp::create_object<app::SkeetoDeathReaction_c>(get_class());
        }
    } // namespace SkeetoDeathReaction_c
} // namespace app::classes::types
