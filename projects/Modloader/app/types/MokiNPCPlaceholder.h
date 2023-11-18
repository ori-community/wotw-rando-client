#pragma once
#include <Modloader/app/structs/MokiNPCPlaceholder.h>
#include <Modloader/app/structs/MokiNPCPlaceholder__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MokiNPCPlaceholder {
        inline app::MokiNPCPlaceholder__Class** type_info() {
            static app::MokiNPCPlaceholder__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MokiNPCPlaceholder__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MokiNPCPlaceholder__Class* get_class() {
            return il2cpp::get_class<app::MokiNPCPlaceholder__Class>(type_info(), "", "MokiNPCPlaceholder");
        }
        inline app::MokiNPCPlaceholder* create() {
            return il2cpp::create_object<app::MokiNPCPlaceholder>(get_class());
        }
    } // namespace MokiNPCPlaceholder
} // namespace app::classes::types
