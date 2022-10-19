#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace UberPoolParticlesClear {
        namespace {
            inline app::UberPoolParticlesClear__Class* type_info_ref = nullptr;
        }
        inline app::UberPoolParticlesClear__Class** type_info = &type_info_ref;
        inline app::UberPoolParticlesClear__Class* get_class() {
            return il2cpp::get_class<app::UberPoolParticlesClear__Class>(type_info, "", "UberPoolParticlesClear");
        }
        inline app::UberPoolParticlesClear* create() {
            return il2cpp::create_object<app::UberPoolParticlesClear>(get_class());
        }
    } // namespace UberPoolParticlesClear
} // namespace app::classes::types
