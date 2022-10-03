#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IFieldOfViewInfluencer__Array {
        namespace {
            app::IFieldOfViewInfluencer__Array__Class* type_info_ref = nullptr;
        }
        app::IFieldOfViewInfluencer__Array__Class** type_info = &type_info_ref;
        inline app::IFieldOfViewInfluencer__Array__Class* get_class() {
            return il2cpp::get_class<app::IFieldOfViewInfluencer__Array__Class>(type_info, "", "IFieldOfViewInfluencer[]");
        }
        inline app::IFieldOfViewInfluencer__Array* create() {
            return il2cpp::create_object<app::IFieldOfViewInfluencer__Array>(get_class());
        }
    } // namespace IFieldOfViewInfluencer__Array
} // namespace app::classes::types
