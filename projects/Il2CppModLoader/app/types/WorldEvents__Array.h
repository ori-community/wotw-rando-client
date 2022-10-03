#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace WorldEvents__Array {
        namespace {
            app::WorldEvents__Array__Class* type_info_ref = nullptr;
        }
        app::WorldEvents__Array__Class** type_info = &type_info_ref;
        inline app::WorldEvents__Array__Class* get_class() {
            return il2cpp::get_class<app::WorldEvents__Array__Class>(type_info, "", "WorldEvents[]");
        }
        inline app::WorldEvents__Array* create() {
            return il2cpp::create_object<app::WorldEvents__Array>(get_class());
        }
    } // namespace WorldEvents__Array
} // namespace app::classes::types
