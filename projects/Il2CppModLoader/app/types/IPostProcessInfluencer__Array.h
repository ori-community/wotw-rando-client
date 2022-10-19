#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IPostProcessInfluencer__Array {
        namespace {
            inline app::IPostProcessInfluencer__Array__Class* type_info_ref = nullptr;
        }
        inline app::IPostProcessInfluencer__Array__Class** type_info = &type_info_ref;
        inline app::IPostProcessInfluencer__Array__Class* get_class() {
            return il2cpp::get_class<app::IPostProcessInfluencer__Array__Class>(type_info, "", "IPostProcessInfluencer[]");
        }
        inline app::IPostProcessInfluencer__Array* create() {
            return il2cpp::create_object<app::IPostProcessInfluencer__Array>(get_class());
        }
    } // namespace IPostProcessInfluencer__Array
} // namespace app::classes::types
