#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ReplayModel__Array {
        namespace {
            app::ReplayModel__Array__Class* type_info_ref = nullptr;
        }
        app::ReplayModel__Array__Class** type_info = &type_info_ref;
        inline app::ReplayModel__Array__Class* get_class() {
            return il2cpp::get_class<app::ReplayModel__Array__Class>(type_info, "", "ReplayModel[]");
        }
        inline app::ReplayModel__Array* create() {
            return il2cpp::create_object<app::ReplayModel__Array>(get_class());
        }
    } // namespace ReplayModel__Array
} // namespace app::classes::types
