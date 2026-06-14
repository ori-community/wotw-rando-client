#pragma once
#include <Modloader/app/structs/IIndexedItem.h>
#include <Modloader/app/structs/IIndexedItem__Array.h>
#include <Modloader/app/structs/IIndexedItem__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IIndexedItem {
        inline app::IIndexedItem__Class** type_info() {
            static app::IIndexedItem__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::IIndexedItem__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::IIndexedItem__Class* get_class() {
            return il2cpp::get_class<app::IIndexedItem__Class>(type_info(), "", "IIndexedItem");
        }
        inline app::IIndexedItem__Array* create_array(int size) {
            return il2cpp::array_new<app::IIndexedItem__Array>(get_class(), size);
        }
        inline app::IIndexedItem__Array* create_array(const std::vector<app::IIndexedItem*>& items) {
            return il2cpp::array_new<app::IIndexedItem__Array>(get_class(), items);
        }
    } // namespace IIndexedItem
} // namespace app::classes::types
