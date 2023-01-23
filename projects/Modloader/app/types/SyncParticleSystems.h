#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SyncParticleSystems__Class.h>
#include <Modloader/app/structs/SyncParticleSystems.h>

namespace app::classes::types {
    namespace SyncParticleSystems {
        namespace {
            inline app::SyncParticleSystems__Class* type_info_ref = nullptr;
        }
        inline app::SyncParticleSystems__Class** type_info = &type_info_ref;
        inline app::SyncParticleSystems__Class* get_class() {
            return il2cpp::get_class<app::SyncParticleSystems__Class>(type_info, "", "SyncParticleSystems");
        }
        inline app::SyncParticleSystems* create() {
            return il2cpp::create_object<app::SyncParticleSystems>(get_class());
        }
    } // namespace SyncParticleSystems
} // namespace app::classes::types
