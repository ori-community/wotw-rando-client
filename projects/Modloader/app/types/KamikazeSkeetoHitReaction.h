#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace KamikazeSkeetoHitReaction {
        namespace {
            inline app::KamikazeSkeetoHitReaction__Class* type_info_ref = nullptr;
        }
        inline app::KamikazeSkeetoHitReaction__Class** type_info = &type_info_ref;
        inline app::KamikazeSkeetoHitReaction__Class* get_class() {
            return il2cpp::get_class<app::KamikazeSkeetoHitReaction__Class>(type_info, "", "KamikazeSkeetoHitReaction");
        }
        inline app::KamikazeSkeetoHitReaction* create() {
            return il2cpp::create_object<app::KamikazeSkeetoHitReaction>(get_class());
        }
    } // namespace KamikazeSkeetoHitReaction
} // namespace app::classes::types
