#pragma once
#include <Modloader/app/structs/LianaPlaceholder.h>
#include <Modloader/app/structs/LianaPlaceholder__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LianaPlaceholder {
        inline app::LianaPlaceholder__Class** type_info() {
            static app::LianaPlaceholder__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LianaPlaceholder__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LianaPlaceholder__Class* get_class() {
            return il2cpp::get_class<app::LianaPlaceholder__Class>(type_info(), "", "LianaPlaceholder");
        }
        inline app::LianaPlaceholder* create() {
            return il2cpp::create_object<app::LianaPlaceholder>(get_class());
        }
    } // namespace LianaPlaceholder
} // namespace app::classes::types
