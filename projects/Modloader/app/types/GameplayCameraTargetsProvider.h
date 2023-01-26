#pragma once
#include <Modloader/app/structs/GameplayCameraTargetsProvider.h>
#include <Modloader/app/structs/GameplayCameraTargetsProvider__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GameplayCameraTargetsProvider {
        inline app::GameplayCameraTargetsProvider__Class** type_info() {
            static app::GameplayCameraTargetsProvider__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GameplayCameraTargetsProvider__Class**)(modloader::win::memory::resolve_rva(0x0473E8B8));
            }
            return cache;
        }
        inline app::GameplayCameraTargetsProvider__Class* get_class() {
            return il2cpp::get_class<app::GameplayCameraTargetsProvider__Class>(type_info(), "", "GameplayCameraTargetsProvider");
        }
        inline app::GameplayCameraTargetsProvider* create() {
            return il2cpp::create_object<app::GameplayCameraTargetsProvider>(get_class());
        }
    } // namespace GameplayCameraTargetsProvider
} // namespace app::classes::types
