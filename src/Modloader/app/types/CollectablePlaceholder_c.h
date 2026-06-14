#pragma once
#include <Modloader/app/structs/CollectablePlaceholder_c.h>
#include <Modloader/app/structs/CollectablePlaceholder_c__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CollectablePlaceholder_c {
        inline app::CollectablePlaceholder_c__Class** type_info() {
            static app::CollectablePlaceholder_c__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CollectablePlaceholder_c__Class**)(modloader::win::memory::resolve_rva(0x04795B40));
            }
            return cache;
        }
        inline app::CollectablePlaceholder_c__Class* get_class() {
            return il2cpp::get_nested_class<app::CollectablePlaceholder_c__Class>(type_info(), "", "CollectablePlaceholder", "<>c");
        }
        inline app::CollectablePlaceholder_c* create() {
            return il2cpp::create_object<app::CollectablePlaceholder_c>(get_class());
        }
    } // namespace CollectablePlaceholder_c
} // namespace app::classes::types
