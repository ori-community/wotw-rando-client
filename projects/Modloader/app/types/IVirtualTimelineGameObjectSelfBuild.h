#pragma once
#include <Modloader/app/structs/IVirtualTimelineGameObjectSelfBuild.h>
#include <Modloader/app/structs/IVirtualTimelineGameObjectSelfBuild__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IVirtualTimelineGameObjectSelfBuild {
        inline app::IVirtualTimelineGameObjectSelfBuild__Class** type_info() {
            static app::IVirtualTimelineGameObjectSelfBuild__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IVirtualTimelineGameObjectSelfBuild__Class**)(modloader::win::memory::resolve_rva(0x04799670));
            }
            return cache;
        }
        inline app::IVirtualTimelineGameObjectSelfBuild__Class* get_class() {
            return il2cpp::get_class<app::IVirtualTimelineGameObjectSelfBuild__Class>(type_info(), "", "IVirtualTimelineGameObjectSelfBuild");
        }
    } // namespace IVirtualTimelineGameObjectSelfBuild
} // namespace app::classes::types
