#pragma once
#include <Modloader/app/structs/IVRSystem_GetHiddenAreaMesh.h>
#include <Modloader/app/structs/IVRSystem_GetHiddenAreaMesh__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IVRSystem_GetHiddenAreaMesh {
        inline app::IVRSystem_GetHiddenAreaMesh__Class** type_info() {
            static app::IVRSystem_GetHiddenAreaMesh__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IVRSystem_GetHiddenAreaMesh__Class**)(modloader::win::memory::resolve_rva(0x0472C7A8));
            }
            return cache;
        }
        inline app::IVRSystem_GetHiddenAreaMesh__Class* get_class() {
            return il2cpp::get_nested_class<app::IVRSystem_GetHiddenAreaMesh__Class>(type_info(), "ZenFulcrum.VR.OpenVRBinding", "IVRSystem", "_GetHiddenAreaMesh");
        }
        inline app::IVRSystem_GetHiddenAreaMesh* create() {
            return il2cpp::create_object<app::IVRSystem_GetHiddenAreaMesh>(get_class());
        }
    } // namespace IVRSystem_GetHiddenAreaMesh
} // namespace app::classes::types
