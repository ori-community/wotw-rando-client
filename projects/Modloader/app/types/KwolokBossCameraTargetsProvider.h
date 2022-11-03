#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace KwolokBossCameraTargetsProvider {
        namespace {
            inline app::KwolokBossCameraTargetsProvider__Class* type_info_ref = nullptr;
        }
        inline app::KwolokBossCameraTargetsProvider__Class** type_info = &type_info_ref;
        inline app::KwolokBossCameraTargetsProvider__Class* get_class() {
            return il2cpp::get_class<app::KwolokBossCameraTargetsProvider__Class>(type_info, "", "KwolokBossCameraTargetsProvider");
        }
        inline app::KwolokBossCameraTargetsProvider* create() {
            return il2cpp::create_object<app::KwolokBossCameraTargetsProvider>(get_class());
        }
    } // namespace KwolokBossCameraTargetsProvider
} // namespace app::classes::types
