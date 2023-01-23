#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/GrabbableSurface_PositionInfo__Class.h>
#include <Modloader/app/structs/GrabbableSurface_PositionInfo.h>

namespace app::classes::types {
    namespace GrabbableSurface_PositionInfo {
        inline app::GrabbableSurface_PositionInfo__Class** type_info = (app::GrabbableSurface_PositionInfo__Class**)(modloader::win::memory::resolve_rva(0x04732EB0));
        inline app::GrabbableSurface_PositionInfo__Class* get_class() {
            return il2cpp::get_nested_class<app::GrabbableSurface_PositionInfo__Class>(type_info, "", "GrabbableSurface", "PositionInfo");
        }
        inline app::GrabbableSurface_PositionInfo* create() {
            return il2cpp::create_object<app::GrabbableSurface_PositionInfo>(get_class());
        }
    } // namespace GrabbableSurface_PositionInfo
} // namespace app::classes::types
