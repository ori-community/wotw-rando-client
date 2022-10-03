#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace D3D12TextureData_t {
        namespace {
            app::D3D12TextureData_t__Class* type_info_ref = nullptr;
        }
        app::D3D12TextureData_t__Class** type_info = &type_info_ref;
        inline app::D3D12TextureData_t__Class* get_class() {
            return il2cpp::get_class<app::D3D12TextureData_t__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "D3D12TextureData_t");
        }
        inline app::D3D12TextureData_t* create() {
            return il2cpp::create_object<app::D3D12TextureData_t>(get_class());
        }
        inline app::D3D12TextureData_t__Boxed* box(app::D3D12TextureData_t value) {
            return il2cpp::box_value<app::D3D12TextureData_t__Boxed>(get_class(), value);
        }
    } // namespace D3D12TextureData_t
} // namespace app::classes::types
