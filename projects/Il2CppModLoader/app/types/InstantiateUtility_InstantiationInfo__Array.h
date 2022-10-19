#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace InstantiateUtility_InstantiationInfo__Array {
        namespace {
            inline app::InstantiateUtility_InstantiationInfo__Array__Class* type_info_ref = nullptr;
        }
        inline app::InstantiateUtility_InstantiationInfo__Array__Class** type_info = &type_info_ref;
        inline app::InstantiateUtility_InstantiationInfo__Array__Class* get_class() {
            return il2cpp::get_class<app::InstantiateUtility_InstantiationInfo__Array__Class>(type_info, "", "InstantiateUtility+InstantiationInfo[]");
        }
        inline app::InstantiateUtility_InstantiationInfo__Array* create() {
            return il2cpp::create_object<app::InstantiateUtility_InstantiationInfo__Array>(get_class());
        }
    } // namespace InstantiateUtility_InstantiationInfo__Array
} // namespace app::classes::types
