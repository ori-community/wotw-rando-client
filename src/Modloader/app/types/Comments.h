#pragma once
#include <Modloader/app/structs/Comments.h>
#include <Modloader/app/structs/Comments__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Comments {
        inline app::Comments__Class** type_info() {
            static app::Comments__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Comments__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Comments__Class* get_class() {
            return il2cpp::get_class<app::Comments__Class>(type_info(), "RootMotion", "Comments");
        }
        inline app::Comments* create() {
            return il2cpp::create_object<app::Comments>(get_class());
        }
    } // namespace Comments
} // namespace app::classes::types
