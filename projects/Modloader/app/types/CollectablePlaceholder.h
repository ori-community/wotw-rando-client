#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace CollectablePlaceholder {
        inline app::CollectablePlaceholder__Class** type_info = (app::CollectablePlaceholder__Class**)(modloader::win::memory::resolve_rva(0x04762A18));
        inline app::CollectablePlaceholder__Class* get_class() {
            return il2cpp::get_class<app::CollectablePlaceholder__Class>(type_info, "", "CollectablePlaceholder");
        }
        inline app::CollectablePlaceholder* create() {
            return il2cpp::create_object<app::CollectablePlaceholder>(get_class());
        }
        inline app::CollectablePlaceholder__Array* create_array(int size) {
            return il2cpp::array_new<app::CollectablePlaceholder__Array>(get_class(), size);
        }
        inline app::CollectablePlaceholder__Array* create_array(const std::vector<app::CollectablePlaceholder*>& items) {
            return il2cpp::array_new<app::CollectablePlaceholder__Array>(get_class(), items);
        }
    } // namespace CollectablePlaceholder
} // namespace app::classes::types
