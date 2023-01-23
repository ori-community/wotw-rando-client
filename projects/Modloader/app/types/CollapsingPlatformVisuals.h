#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/CollapsingPlatformVisuals__Class.h>
#include <Modloader/app/structs/CollapsingPlatformVisuals.h>

namespace app::classes::types {
    namespace CollapsingPlatformVisuals {
        namespace {
            inline app::CollapsingPlatformVisuals__Class* type_info_ref = nullptr;
        }
        inline app::CollapsingPlatformVisuals__Class** type_info = &type_info_ref;
        inline app::CollapsingPlatformVisuals__Class* get_class() {
            return il2cpp::get_class<app::CollapsingPlatformVisuals__Class>(type_info, "", "CollapsingPlatformVisuals");
        }
        inline app::CollapsingPlatformVisuals* create() {
            return il2cpp::create_object<app::CollapsingPlatformVisuals>(get_class());
        }
    } // namespace CollapsingPlatformVisuals
} // namespace app::classes::types
