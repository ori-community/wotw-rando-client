#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SyncParticleSystems {
        namespace {
            app::SyncParticleSystems__Class* type_info_ref = nullptr;
        }
        app::SyncParticleSystems__Class** type_info = &type_info_ref;
        inline app::SyncParticleSystems__Class* get_class() {
            return il2cpp::get_class<app::SyncParticleSystems__Class>(type_info, "", "SyncParticleSystems");
        }
        inline app::SyncParticleSystems* create() {
            return il2cpp::create_object<app::SyncParticleSystems>(get_class());
        }
    } // namespace SyncParticleSystems
} // namespace app::classes::types
