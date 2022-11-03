#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SafeToShowWispTextCondition {
        namespace {
            inline app::SafeToShowWispTextCondition__Class* type_info_ref = nullptr;
        }
        inline app::SafeToShowWispTextCondition__Class** type_info = &type_info_ref;
        inline app::SafeToShowWispTextCondition__Class* get_class() {
            return il2cpp::get_class<app::SafeToShowWispTextCondition__Class>(type_info, "", "SafeToShowWispTextCondition");
        }
        inline app::SafeToShowWispTextCondition* create() {
            return il2cpp::create_object<app::SafeToShowWispTextCondition>(get_class());
        }
    } // namespace SafeToShowWispTextCondition
} // namespace app::classes::types
