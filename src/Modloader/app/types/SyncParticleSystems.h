#pragma once
#include <Modloader/app/structs/SyncParticleSystems.h>
#include <Modloader/app/structs/SyncParticleSystems__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SyncParticleSystems {
        inline app::SyncParticleSystems__Class** type_info() {
            static app::SyncParticleSystems__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SyncParticleSystems__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SyncParticleSystems__Class* get_class() {
            return il2cpp::get_class<app::SyncParticleSystems__Class>(type_info(), "", "SyncParticleSystems");
        }
        inline app::SyncParticleSystems* create() {
            return il2cpp::create_object<app::SyncParticleSystems>(get_class());
        }
    } // namespace SyncParticleSystems
} // namespace app::classes::types
