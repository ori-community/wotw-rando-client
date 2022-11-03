#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace CameraFilterPack_Edge_Edge_filter {
        inline app::CameraFilterPack_Edge_Edge_filter__Class** type_info = (app::CameraFilterPack_Edge_Edge_filter__Class**)(modloader::win::memory::resolve_rva(0x0471F660));
        inline app::CameraFilterPack_Edge_Edge_filter__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_Edge_Edge_filter__Class>(type_info, "", "CameraFilterPack_Edge_Edge_filter");
        }
        inline app::CameraFilterPack_Edge_Edge_filter* create() {
            return il2cpp::create_object<app::CameraFilterPack_Edge_Edge_filter>(get_class());
        }
    } // namespace CameraFilterPack_Edge_Edge_filter
} // namespace app::classes::types
