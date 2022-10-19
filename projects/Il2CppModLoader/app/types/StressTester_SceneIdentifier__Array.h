#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace StressTester_SceneIdentifier__Array {
        namespace {
            inline app::StressTester_SceneIdentifier__Array__Class* type_info_ref = nullptr;
        }
        inline app::StressTester_SceneIdentifier__Array__Class** type_info = &type_info_ref;
        inline app::StressTester_SceneIdentifier__Array__Class* get_class() {
            return il2cpp::get_class<app::StressTester_SceneIdentifier__Array__Class>(type_info, "", "StressTester+SceneIdentifier[]");
        }
        inline app::StressTester_SceneIdentifier__Array* create() {
            return il2cpp::create_object<app::StressTester_SceneIdentifier__Array>(get_class());
        }
    } // namespace StressTester_SceneIdentifier__Array
} // namespace app::classes::types
