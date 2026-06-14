#pragma once
#include <Modloader/app/structs/SkeetoHitReaction.h>
#include <Modloader/app/structs/SkeetoHitReaction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SkeetoHitReaction {
        inline app::SkeetoHitReaction__Class** type_info() {
            static app::SkeetoHitReaction__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SkeetoHitReaction__Class**)(modloader::win::memory::resolve_rva(0x0470D458));
            }
            return cache;
        }
        inline app::SkeetoHitReaction__Class* get_class() {
            return il2cpp::get_class<app::SkeetoHitReaction__Class>(type_info(), "", "SkeetoHitReaction");
        }
        inline app::SkeetoHitReaction* create() {
            return il2cpp::create_object<app::SkeetoHitReaction>(get_class());
        }
    } // namespace SkeetoHitReaction
} // namespace app::classes::types
