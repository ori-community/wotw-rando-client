#pragma once
#include <Modloader/app/structs/D3D12TextureData_t.h>
#include <Modloader/app/structs/D3D12TextureData_t__Boxed.h>
#include <Modloader/app/structs/D3D12TextureData_t__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace D3D12TextureData_t {
        inline app::D3D12TextureData_t__Class** type_info() {
            static app::D3D12TextureData_t__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::D3D12TextureData_t__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::D3D12TextureData_t__Class* get_class() {
            return il2cpp::get_class<app::D3D12TextureData_t__Class>(type_info(), "ZenFulcrum.VR.OpenVRBinding", "D3D12TextureData_t");
        }
        inline app::D3D12TextureData_t* create() {
            return il2cpp::create_object<app::D3D12TextureData_t>(get_class());
        }
        inline app::D3D12TextureData_t__Boxed* box(app::D3D12TextureData_t value) {
            return il2cpp::box_value<app::D3D12TextureData_t__Boxed>(get_class(), value);
        }
    } // namespace D3D12TextureData_t
} // namespace app::classes::types
