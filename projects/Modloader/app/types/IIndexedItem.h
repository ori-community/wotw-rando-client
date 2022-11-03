#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace IIndexedItem {
        namespace {
            inline app::IIndexedItem__Class* type_info_ref = nullptr;
        }
        inline app::IIndexedItem__Class** type_info = &type_info_ref;
        inline app::IIndexedItem__Class* get_class() {
            return il2cpp::get_class<app::IIndexedItem__Class>(type_info, "", "IIndexedItem");
        }
        inline app::IIndexedItem__Array* create_array(int size) {
            return il2cpp::array_new<app::IIndexedItem__Array>(get_class(), size);
        }
        inline app::IIndexedItem__Array* create_array(const std::vector<app::IIndexedItem*>& items) {
            return il2cpp::array_new<app::IIndexedItem__Array>(get_class(), items);
        }
    } // namespace IIndexedItem
} // namespace app::classes::types
