#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LabelScopeInfo {
        extern IL2CPP_MODLOADER_DLLEXPORT app::LabelScopeInfo__Class** type_info;
        inline app::LabelScopeInfo__Class* get_class() {
            return il2cpp::get_class<app::LabelScopeInfo__Class>(type_info, "System.Linq.Expressions.Interpreter", "LabelScopeInfo");
        }
        inline app::LabelScopeInfo* create() {
            return il2cpp::create_object<app::LabelScopeInfo>(get_class());
        }
        inline app::LabelScopeInfo__Array* create_array(int size) {
            return il2cpp::array_new<app::LabelScopeInfo__Array>(get_class(), size);
        }
    } // namespace LabelScopeInfo
} // namespace app::classes::types
