#pragma once
#include <Modloader/app/structs/KamikazeJumperKillOnHit.h>
#include <Modloader/app/structs/KamikazeJumperKillOnHit__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace KamikazeJumperKillOnHit {
        inline app::KamikazeJumperKillOnHit__Class** type_info() {
            static app::KamikazeJumperKillOnHit__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::KamikazeJumperKillOnHit__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::KamikazeJumperKillOnHit__Class* get_class() {
            return il2cpp::get_class<app::KamikazeJumperKillOnHit__Class>(type_info(), "", "KamikazeJumperKillOnHit");
        }
        inline app::KamikazeJumperKillOnHit* create() {
            return il2cpp::create_object<app::KamikazeJumperKillOnHit>(get_class());
        }
    } // namespace KamikazeJumperKillOnHit
} // namespace app::classes::types
