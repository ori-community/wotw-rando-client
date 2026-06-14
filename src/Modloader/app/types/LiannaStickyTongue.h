#pragma once
#include <Modloader/app/structs/LiannaStickyTongue.h>
#include <Modloader/app/structs/LiannaStickyTongue__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LiannaStickyTongue {
        inline app::LiannaStickyTongue__Class** type_info() {
            static app::LiannaStickyTongue__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LiannaStickyTongue__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LiannaStickyTongue__Class* get_class() {
            return il2cpp::get_class<app::LiannaStickyTongue__Class>(type_info(), "", "LiannaStickyTongue");
        }
        inline app::LiannaStickyTongue* create() {
            return il2cpp::create_object<app::LiannaStickyTongue>(get_class());
        }
    } // namespace LiannaStickyTongue
} // namespace app::classes::types
