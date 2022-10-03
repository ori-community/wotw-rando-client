#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace KwolokBossCameraTargetsProvider {
        namespace {
            app::KwolokBossCameraTargetsProvider__Class* type_info_ref = nullptr;
        }
        app::KwolokBossCameraTargetsProvider__Class** type_info = &type_info_ref;
        inline app::KwolokBossCameraTargetsProvider__Class* get_class() {
            return il2cpp::get_class<app::KwolokBossCameraTargetsProvider__Class>(type_info, "", "KwolokBossCameraTargetsProvider");
        }
        inline app::KwolokBossCameraTargetsProvider* create() {
            return il2cpp::create_object<app::KwolokBossCameraTargetsProvider>(get_class());
        }
    } // namespace KwolokBossCameraTargetsProvider
} // namespace app::classes::types
