#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace BuilderItem {
        inline app::BuilderItem__Class** type_info = (app::BuilderItem__Class**)(modloader::win::memory::resolve_rva(0x0478FE18));
        inline app::BuilderItem__Class* get_class() {
            return il2cpp::get_class<app::BuilderItem__Class>(type_info, "", "BuilderItem");
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
