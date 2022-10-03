#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DynamicInstantiationScanner_VisitorCtx {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DynamicInstantiationScanner_VisitorCtx__Class** type_info;
        inline app::DynamicInstantiationScanner_VisitorCtx__Class* get_class() {
            return il2cpp::get_nested_class<app::DynamicInstantiationScanner_VisitorCtx__Class>(type_info, "", "DynamicInstantiationScanner", "VisitorCtx");
        }
        inline app::DynamicInstantiationScanner_VisitorCtx* create() {
            return il2cpp::create_object<app::DynamicInstantiationScanner_VisitorCtx>(get_class());
        }
    } // namespace DynamicInstantiationScanner_VisitorCtx
} // namespace app::classes::types
