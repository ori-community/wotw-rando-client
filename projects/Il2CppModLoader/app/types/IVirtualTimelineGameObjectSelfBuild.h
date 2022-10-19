#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IVirtualTimelineGameObjectSelfBuild {
        inline app::IVirtualTimelineGameObjectSelfBuild__Class** type_info = (app::IVirtualTimelineGameObjectSelfBuild__Class**)(modloader::win::memory::resolve_rva(0x04799670));
        inline app::IVirtualTimelineGameObjectSelfBuild__Class* get_class() {
            return il2cpp::get_class<app::IVirtualTimelineGameObjectSelfBuild__Class>(type_info, "", "IVirtualTimelineGameObjectSelfBuild");
        }
    } // namespace IVirtualTimelineGameObjectSelfBuild
} // namespace app::classes::types
