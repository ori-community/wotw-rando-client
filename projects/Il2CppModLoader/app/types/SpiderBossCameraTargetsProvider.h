#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SpiderBossCameraTargetsProvider {
        namespace {
            inline app::SpiderBossCameraTargetsProvider__Class* type_info_ref = nullptr;
        }
        inline app::SpiderBossCameraTargetsProvider__Class** type_info = &type_info_ref;
        inline app::SpiderBossCameraTargetsProvider__Class* get_class() {
            return il2cpp::get_class<app::SpiderBossCameraTargetsProvider__Class>(type_info, "", "SpiderBossCameraTargetsProvider");
        }
        inline app::SpiderBossCameraTargetsProvider* create() {
            return il2cpp::create_object<app::SpiderBossCameraTargetsProvider>(get_class());
        }
    } // namespace SpiderBossCameraTargetsProvider
} // namespace app::classes::types
