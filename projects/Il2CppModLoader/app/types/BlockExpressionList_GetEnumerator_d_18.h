#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace BlockExpressionList_GetEnumerator_d_18 {
        inline app::BlockExpressionList_GetEnumerator_d_18__Class** type_info = (app::BlockExpressionList_GetEnumerator_d_18__Class**)(modloader::win::memory::resolve_rva(0x04778E60));
        inline app::BlockExpressionList_GetEnumerator_d_18__Class* get_class() {
            return il2cpp::get_nested_class<app::BlockExpressionList_GetEnumerator_d_18__Class>(type_info, "System.Linq.Expressions", "BlockExpressionList", "<GetEnumerator>d__18");
        }
        inline app::BlockExpressionList_GetEnumerator_d_18* create() {
            return il2cpp::create_object<app::BlockExpressionList_GetEnumerator_d_18>(get_class());
        }
    } // namespace BlockExpressionList_GetEnumerator_d_18
} // namespace app::classes::types
