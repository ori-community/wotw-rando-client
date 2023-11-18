#pragma once
#include <Modloader/app/structs/ZProjectionFollower.h>
#include <Modloader/app/structs/ZProjectionFollower__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ZProjectionFollower {
        inline app::ZProjectionFollower__Class** type_info() {
            static app::ZProjectionFollower__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ZProjectionFollower__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ZProjectionFollower__Class* get_class() {
            return il2cpp::get_class<app::ZProjectionFollower__Class>(type_info(), "", "ZProjectionFollower");
        }
        inline app::ZProjectionFollower* create() {
            return il2cpp::create_object<app::ZProjectionFollower>(get_class());
        }
    } // namespace ZProjectionFollower
} // namespace app::classes::types
