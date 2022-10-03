#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LabelTarget {
        extern IL2CPP_MODLOADER_DLLEXPORT app::LabelTarget__Class** type_info;
        inline app::LabelTarget__Class* get_class() {
            return il2cpp::get_class<app::LabelTarget__Class>(type_info, "System.Linq.Expressions", "LabelTarget");
        }
        inline app::LabelTarget* create() {
            return il2cpp::create_object<app::LabelTarget>(get_class());
        }
        inline app::LabelTarget__Array* create_array(int size) {
            return il2cpp::array_new<app::LabelTarget__Array>(get_class(), size);
        }
    } // namespace LabelTarget
} // namespace app::classes::types
