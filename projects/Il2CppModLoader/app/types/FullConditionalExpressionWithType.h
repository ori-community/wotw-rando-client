#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace FullConditionalExpressionWithType {
        extern IL2CPP_MODLOADER_DLLEXPORT app::FullConditionalExpressionWithType__Class** type_info;
        inline app::FullConditionalExpressionWithType__Class* get_class() {
            return il2cpp::get_class<app::FullConditionalExpressionWithType__Class>(type_info, "System.Linq.Expressions", "FullConditionalExpressionWithType");
        }
        inline app::FullConditionalExpressionWithType* create() {
            return il2cpp::create_object<app::FullConditionalExpressionWithType>(get_class());
        }
    } // namespace FullConditionalExpressionWithType
} // namespace app::classes::types
