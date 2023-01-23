#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/GameplayCameraTargetsProvider__Class.h>
#include <Modloader/app/structs/GameplayCameraTargetsProvider.h>

namespace app::classes::types {
    namespace GameplayCameraTargetsProvider {
        inline app::GameplayCameraTargetsProvider__Class** type_info = (app::GameplayCameraTargetsProvider__Class**)(modloader::win::memory::resolve_rva(0x0473E8B8));
        inline app::GameplayCameraTargetsProvider__Class* get_class() {
            return il2cpp::get_class<app::GameplayCameraTargetsProvider__Class>(type_info, "", "GameplayCameraTargetsProvider");
        }
        inline app::GameplayCameraTargetsProvider* create() {
            return il2cpp::create_object<app::GameplayCameraTargetsProvider>(get_class());
        }
    } // namespace GameplayCameraTargetsProvider
} // namespace app::classes::types
