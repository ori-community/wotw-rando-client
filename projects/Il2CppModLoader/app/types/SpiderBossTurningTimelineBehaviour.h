#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SpiderBossTurningTimelineBehaviour {
        namespace {
            inline app::SpiderBossTurningTimelineBehaviour__Class* type_info_ref = nullptr;
        }
        inline app::SpiderBossTurningTimelineBehaviour__Class** type_info = &type_info_ref;
        inline app::SpiderBossTurningTimelineBehaviour__Class* get_class() {
            return il2cpp::get_class<app::SpiderBossTurningTimelineBehaviour__Class>(type_info, "", "SpiderBossTurningTimelineBehaviour");
        }
        inline app::SpiderBossTurningTimelineBehaviour* create() {
            return il2cpp::create_object<app::SpiderBossTurningTimelineBehaviour>(get_class());
        }
    } // namespace SpiderBossTurningTimelineBehaviour
} // namespace app::classes::types
