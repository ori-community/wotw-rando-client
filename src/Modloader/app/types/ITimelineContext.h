#pragma once
#include <Modloader/app/structs/ITimelineContext.h>
#include <Modloader/app/structs/ITimelineContext__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ITimelineContext {
        inline app::ITimelineContext__Class** type_info() {
            static app::ITimelineContext__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ITimelineContext__Class**)(modloader::win::memory::resolve_rva(0x04715F58));
            }
            return cache;
        }
        inline app::ITimelineContext__Class* get_class() {
            return il2cpp::get_class<app::ITimelineContext__Class>(type_info(), "Moon.Timeline", "ITimelineContext");
        }
    } // namespace ITimelineContext
} // namespace app::classes::types
