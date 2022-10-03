#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GrabbableSurface {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GrabbableSurface__Class** type_info;
        inline app::GrabbableSurface__Class* get_class() {
            return il2cpp::get_class<app::GrabbableSurface__Class>(type_info, "", "GrabbableSurface");
        }
        inline app::GrabbableSurface* create() {
            return il2cpp::create_object<app::GrabbableSurface>(get_class());
        }
        inline app::GrabbableSurface__Array* create_array(int size) {
            return il2cpp::array_new<app::GrabbableSurface__Array>(get_class(), size);
        }
    } // namespace GrabbableSurface
} // namespace app::classes::types
