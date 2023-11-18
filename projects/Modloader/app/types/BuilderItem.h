#pragma once
#include <Modloader/app/structs/BuilderItem.h>
#include <Modloader/app/structs/BuilderItem__Array.h>
#include <Modloader/app/structs/BuilderItem__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BuilderItem {
        inline app::BuilderItem__Class** type_info() {
            static app::BuilderItem__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::BuilderItem__Class**)(modloader::win::memory::resolve_rva(0x0478FE18));
            }
            return cache;
        }
        inline app::BuilderItem__Class* get_class() {
            return il2cpp::get_class<app::BuilderItem__Class>(type_info(), "", "BuilderItem");
        }
        inline app::BuilderItem* create() {
            return il2cpp::create_object<app::BuilderItem>(get_class());
        }
        inline app::BuilderItem__Array* create_array(int size) {
            return il2cpp::array_new<app::BuilderItem__Array>(get_class(), size);
        }
        inline app::BuilderItem__Array* create_array(const std::vector<app::BuilderItem*>& items) {
            return il2cpp::array_new<app::BuilderItem__Array>(get_class(), items);
        }
    } // namespace BuilderItem
} // namespace app::classes::types
