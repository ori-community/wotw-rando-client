#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BadSubseg__Array {
        namespace {
            app::BadSubseg__Array__Class* type_info_ref = nullptr;
        }
        app::BadSubseg__Array__Class** type_info = &type_info_ref;
        inline app::BadSubseg__Array__Class* get_class() {
            return il2cpp::get_class<app::BadSubseg__Array__Class>(type_info, "TriangleNet.Meshing.Data", "BadSubseg[]");
        }
        inline app::BadSubseg__Array* create() {
            return il2cpp::create_object<app::BadSubseg__Array>(get_class());
        }
    } // namespace BadSubseg__Array
} // namespace app::classes::types
