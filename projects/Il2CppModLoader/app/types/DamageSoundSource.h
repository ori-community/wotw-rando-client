#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DamageSoundSource {
        namespace {
            app::DamageSoundSource__Class* type_info_ref = nullptr;
        }
        app::DamageSoundSource__Class** type_info = &type_info_ref;
        inline app::DamageSoundSource__Class* get_class() {
            return il2cpp::get_class<app::DamageSoundSource__Class>(type_info, "", "DamageSoundSource");
        }
        inline app::DamageSoundSource* create() {
            return il2cpp::create_object<app::DamageSoundSource>(get_class());
        }
    } // namespace DamageSoundSource
} // namespace app::classes::types
