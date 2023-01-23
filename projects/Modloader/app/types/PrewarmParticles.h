#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/PrewarmParticles__Class.h>
#include <Modloader/app/structs/PrewarmParticles.h>

namespace app::classes::types {
    namespace PrewarmParticles {
        namespace {
            inline app::PrewarmParticles__Class* type_info_ref = nullptr;
        }
        inline app::PrewarmParticles__Class** type_info = &type_info_ref;
        inline app::PrewarmParticles__Class* get_class() {
            return il2cpp::get_class<app::PrewarmParticles__Class>(type_info, "", "PrewarmParticles");
        }
        inline app::PrewarmParticles* create() {
            return il2cpp::create_object<app::PrewarmParticles>(get_class());
        }
    } // namespace PrewarmParticles
} // namespace app::classes::types
