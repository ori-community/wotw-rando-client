#pragma once
#include <Modloader/app/structs/ShowGetWispTextEntity.h>
#include <Modloader/app/structs/ShowGetWispTextEntity__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShowGetWispTextEntity {
        inline app::ShowGetWispTextEntity__Class** type_info() {
            static app::ShowGetWispTextEntity__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ShowGetWispTextEntity__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ShowGetWispTextEntity__Class* get_class() {
            return il2cpp::get_class<app::ShowGetWispTextEntity__Class>(type_info(), "Moon.Timeline", "ShowGetWispTextEntity");
        }
        inline app::ShowGetWispTextEntity* create() {
            return il2cpp::create_object<app::ShowGetWispTextEntity>(get_class());
        }
    } // namespace ShowGetWispTextEntity
} // namespace app::classes::types
