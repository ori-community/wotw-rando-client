#pragma once
#include <Modloader/app/structs/KuPlaceholder.h>
#include <Modloader/app/structs/KuPlaceholder__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace KuPlaceholder {
        inline app::KuPlaceholder__Class** type_info() {
            static app::KuPlaceholder__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::KuPlaceholder__Class**)(modloader::win::memory::resolve_rva(0x0471E8D8));
            }
            return cache;
        }
        inline app::KuPlaceholder__Class* get_class() {
            return il2cpp::get_class<app::KuPlaceholder__Class>(type_info(), "", "KuPlaceholder");
        }
        inline app::KuPlaceholder* create() {
            return il2cpp::create_object<app::KuPlaceholder>(get_class());
        }
    } // namespace KuPlaceholder
} // namespace app::classes::types
