#pragma once
#include <Modloader/app/structs/ITimelineEventProviderWithTime.h>
#include <Modloader/app/structs/ITimelineEventProviderWithTime__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ITimelineEventProviderWithTime {
        inline app::ITimelineEventProviderWithTime__Class** type_info() {
            static app::ITimelineEventProviderWithTime__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ITimelineEventProviderWithTime__Class**)(modloader::win::memory::resolve_rva(0x04776D18));
            }
            return cache;
        }
        inline app::ITimelineEventProviderWithTime__Class* get_class() {
            return il2cpp::get_class<app::ITimelineEventProviderWithTime__Class>(type_info(), "Moon.Timeline", "ITimelineEventProviderWithTime");
        }
    } // namespace ITimelineEventProviderWithTime
} // namespace app::classes::types
