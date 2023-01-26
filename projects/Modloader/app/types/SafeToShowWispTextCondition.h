#pragma once
#include <Modloader/app/structs/SafeToShowWispTextCondition.h>
#include <Modloader/app/structs/SafeToShowWispTextCondition__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SafeToShowWispTextCondition {
        inline app::SafeToShowWispTextCondition__Class** type_info() {
            static app::SafeToShowWispTextCondition__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SafeToShowWispTextCondition__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SafeToShowWispTextCondition__Class* get_class() {
            return il2cpp::get_class<app::SafeToShowWispTextCondition__Class>(type_info(), "", "SafeToShowWispTextCondition");
        }
        inline app::SafeToShowWispTextCondition* create() {
            return il2cpp::create_object<app::SafeToShowWispTextCondition>(get_class());
        }
    } // namespace SafeToShowWispTextCondition
} // namespace app::classes::types
