#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LabelInfo {
        extern IL2CPP_MODLOADER_DLLEXPORT app::LabelInfo__Class** type_info;
        inline app::LabelInfo__Class* get_class() {
            return il2cpp::get_class<app::LabelInfo__Class>(type_info, "System.Linq.Expressions.Interpreter", "LabelInfo");
        }
        inline app::LabelInfo* create() {
            return il2cpp::create_object<app::LabelInfo>(get_class());
        }
        inline app::LabelInfo__Array* create_array(int size) {
            return il2cpp::array_new<app::LabelInfo__Array>(get_class(), size);
        }
        inline app::LabelInfo__Array* create_array(const std::vector<app::LabelInfo*>& items) {
            return il2cpp::array_new<app::LabelInfo__Array>(get_class(), items);
        }
    } // namespace LabelInfo
} // namespace app::classes::types
