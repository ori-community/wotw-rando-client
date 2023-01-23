#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/MoonTimelineNotifier__Class.h>
#include <Modloader/app/structs/MoonTimelineNotifier.h>

namespace app::classes::types {
    namespace MoonTimelineNotifier {
        inline app::MoonTimelineNotifier__Class** type_info = (app::MoonTimelineNotifier__Class**)(modloader::win::memory::resolve_rva(0x0476B6A8));
        inline app::MoonTimelineNotifier__Class* get_class() {
            return il2cpp::get_class<app::MoonTimelineNotifier__Class>(type_info, "Moon.Timeline", "MoonTimelineNotifier");
        }
        inline app::MoonTimelineNotifier* create() {
            return il2cpp::create_object<app::MoonTimelineNotifier>(get_class());
        }
    } // namespace MoonTimelineNotifier
} // namespace app::classes::types
