#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ScreenshotLegacySetup__Array__Class.h>
#include <Modloader/app/structs/ScreenshotLegacySetup__Array.h>

namespace app::classes::types {
    namespace ScreenshotLegacySetup__Array {
        namespace {
            inline app::ScreenshotLegacySetup__Array__Class* type_info_ref = nullptr;
        }
        inline app::ScreenshotLegacySetup__Array__Class** type_info = &type_info_ref;
        inline app::ScreenshotLegacySetup__Array__Class* get_class() {
            return il2cpp::get_class<app::ScreenshotLegacySetup__Array__Class>(type_info, "", "ScreenshotLegacySetup[]");
        }
        inline app::ScreenshotLegacySetup__Array* create() {
            return il2cpp::create_object<app::ScreenshotLegacySetup__Array>(get_class());
        }
    } // namespace ScreenshotLegacySetup__Array
} // namespace app::classes::types
