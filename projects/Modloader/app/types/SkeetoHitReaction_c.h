#pragma once
#include <Modloader/app/structs/SkeetoHitReaction_c.h>
#include <Modloader/app/structs/SkeetoHitReaction_c__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SkeetoHitReaction_c {
        inline app::SkeetoHitReaction_c__Class** type_info() {
            static app::SkeetoHitReaction_c__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SkeetoHitReaction_c__Class**)(modloader::win::memory::resolve_rva(0x047147D0));
            }
            return cache;
        }
        inline app::SkeetoHitReaction_c__Class* get_class() {
            return il2cpp::get_nested_class<app::SkeetoHitReaction_c__Class>(type_info(), "", "SkeetoHitReaction", "<>c");
        }
        inline app::SkeetoHitReaction_c* create() {
            return il2cpp::create_object<app::SkeetoHitReaction_c>(get_class());
        }
    } // namespace SkeetoHitReaction_c
} // namespace app::classes::types
