#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ExpressionParser_ReservedWords {
        namespace {
            inline app::ExpressionParser_ReservedWords__Class* type_info_ref = nullptr;
        }
        inline app::ExpressionParser_ReservedWords__Class** type_info = &type_info_ref;
        inline app::ExpressionParser_ReservedWords__Class* get_class() {
            return il2cpp::get_nested_class<app::ExpressionParser_ReservedWords__Class>(type_info, "System.Data", "ExpressionParser", "ReservedWords");
        }
        inline app::ExpressionParser_ReservedWords* create() {
            return il2cpp::create_object<app::ExpressionParser_ReservedWords>(get_class());
        }
        inline app::ExpressionParser_ReservedWords__Boxed* box(app::ExpressionParser_ReservedWords value) {
            return il2cpp::box_value<app::ExpressionParser_ReservedWords__Boxed>(get_class(), value);
        }
        inline app::ExpressionParser_ReservedWords__Array* create_array(int size) {
            return il2cpp::array_new<app::ExpressionParser_ReservedWords__Array>(get_class(), size);
        }
        inline app::ExpressionParser_ReservedWords__Array* create_array(const std::vector<app::ExpressionParser_ReservedWords>& items) {
            return il2cpp::array_new<app::ExpressionParser_ReservedWords__Array>(get_class(), items);
        }
    } // namespace ExpressionParser_ReservedWords
} // namespace app::classes::types
