#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SeinLeafParticles {
        namespace {
            inline app::SeinLeafParticles__Class* type_info_ref = nullptr;
        }
        inline app::SeinLeafParticles__Class** type_info = &type_info_ref;
        inline app::SeinLeafParticles__Class* get_class() {
            return il2cpp::get_class<app::SeinLeafParticles__Class>(type_info, "", "SeinLeafParticles");
        }
        inline app::SeinLeafParticles* create() {
            return il2cpp::create_object<app::SeinLeafParticles>(get_class());
        }
    } // namespace SeinLeafParticles
} // namespace app::classes::types
