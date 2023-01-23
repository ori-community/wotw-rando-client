#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/EHiddenAreaMeshType__Enum__Class.h>
#include <Modloader/app/structs/EHiddenAreaMeshType__Enum.h>

namespace app::classes::types {
    namespace EHiddenAreaMeshType__Enum {
        inline app::EHiddenAreaMeshType__Enum__Class** type_info = (app::EHiddenAreaMeshType__Enum__Class**)(modloader::win::memory::resolve_rva(0x047109A0));
        inline app::EHiddenAreaMeshType__Enum__Class* get_class() {
            return il2cpp::get_class<app::EHiddenAreaMeshType__Enum__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "EHiddenAreaMeshType");
        }
        inline app::EHiddenAreaMeshType__Enum* create() {
            return il2cpp::create_object<app::EHiddenAreaMeshType__Enum>(get_class());
        }
    } // namespace EHiddenAreaMeshType__Enum
} // namespace app::classes::types
