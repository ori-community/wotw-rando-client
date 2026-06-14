#pragma once
#include <Modloader/app/structs/KwolokBossCameraTargetsProvider.h>
#include <Modloader/app/structs/KwolokBossCameraTargetsProvider__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace KwolokBossCameraTargetsProvider {
        inline app::KwolokBossCameraTargetsProvider__Class** type_info() {
            static app::KwolokBossCameraTargetsProvider__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::KwolokBossCameraTargetsProvider__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::KwolokBossCameraTargetsProvider__Class* get_class() {
            return il2cpp::get_class<app::KwolokBossCameraTargetsProvider__Class>(type_info(), "", "KwolokBossCameraTargetsProvider");
        }
        inline app::KwolokBossCameraTargetsProvider* create() {
            return il2cpp::create_object<app::KwolokBossCameraTargetsProvider>(get_class());
        }
    } // namespace KwolokBossCameraTargetsProvider
} // namespace app::classes::types
