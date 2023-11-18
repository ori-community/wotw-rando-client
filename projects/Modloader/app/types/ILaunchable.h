#pragma once
#include <Modloader/app/structs/ILaunchable.h>
#include <Modloader/app/structs/ILaunchable__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ILaunchable {
        inline app::ILaunchable__Class** type_info() {
            static app::ILaunchable__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ILaunchable__Class**)(modloader::win::memory::resolve_rva(0x04781B98));
            }
            return cache;
        }
        inline app::ILaunchable__Class* get_class() {
            return il2cpp::get_class<app::ILaunchable__Class>(type_info(), "Moon", "ILaunchable");
        }
    } // namespace ILaunchable
} // namespace app::classes::types
