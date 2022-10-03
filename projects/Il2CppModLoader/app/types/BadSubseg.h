#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BadSubseg {
        extern IL2CPP_MODLOADER_DLLEXPORT app::BadSubseg__Class** type_info;
        inline app::BadSubseg__Class* get_class() {
            return il2cpp::get_class<app::BadSubseg__Class>(type_info, "TriangleNet.Meshing.Data", "BadSubseg");
        }
        inline app::BadSubseg* create() {
            return il2cpp::create_object<app::BadSubseg>(get_class());
        }
        inline app::BadSubseg__Array* create_array(int size) {
            return il2cpp::array_new<app::BadSubseg__Array>(get_class(), size);
        }
    } // namespace BadSubseg
} // namespace app::classes::types
