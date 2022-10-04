#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IIndexedItem {
        namespace {
            app::IIndexedItem__Class* type_info_ref = nullptr;
        }
        app::IIndexedItem__Class** type_info = &type_info_ref;
        inline app::IIndexedItem__Class* get_class() {
            return il2cpp::get_class<app::IIndexedItem__Class>(type_info, "", "IIndexedItem");
        }
        inline app::IIndexedItem__Array* create_array(int size) {
            return il2cpp::array_new<app::IIndexedItem__Array>(get_class(), size);
        }
    } // namespace IIndexedItem
} // namespace app::classes::types
