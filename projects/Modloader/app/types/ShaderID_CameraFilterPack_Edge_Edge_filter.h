#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ShaderID_CameraFilterPack_Edge_Edge_filter__Class.h>
#include <Modloader/app/structs/ShaderID_CameraFilterPack_Edge_Edge_filter.h>

namespace app::classes::types {
    namespace ShaderID_CameraFilterPack_Edge_Edge_filter {
        inline app::ShaderID_CameraFilterPack_Edge_Edge_filter__Class** type_info = (app::ShaderID_CameraFilterPack_Edge_Edge_filter__Class**)(modloader::win::memory::resolve_rva(0x0474F690));
        inline app::ShaderID_CameraFilterPack_Edge_Edge_filter__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_CameraFilterPack_Edge_Edge_filter__Class>(type_info, "", "ShaderID_CameraFilterPack_Edge_Edge_filter");
        }
        inline app::ShaderID_CameraFilterPack_Edge_Edge_filter* create() {
            return il2cpp::create_object<app::ShaderID_CameraFilterPack_Edge_Edge_filter>(get_class());
        }
    } // namespace ShaderID_CameraFilterPack_Edge_Edge_filter
} // namespace app::classes::types
