#pragma once
#include <Modloader/app/structs/MothSwarmPlaceholder.h>
#include <Modloader/app/structs/MothSwarmPlaceholder__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MothSwarmPlaceholder {
        inline app::MothSwarmPlaceholder__Class** type_info() {
            static app::MothSwarmPlaceholder__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MothSwarmPlaceholder__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MothSwarmPlaceholder__Class* get_class() {
            return il2cpp::get_class<app::MothSwarmPlaceholder__Class>(type_info(), "", "MothSwarmPlaceholder");
        }
        inline app::MothSwarmPlaceholder* create() {
            return il2cpp::create_object<app::MothSwarmPlaceholder>(get_class());
        }
    } // namespace MothSwarmPlaceholder
} // namespace app::classes::types
