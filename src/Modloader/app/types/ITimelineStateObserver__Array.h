#pragma once
#include <Modloader/app/structs/ITimelineStateObserver__Array.h>
#include <Modloader/app/structs/ITimelineStateObserver__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ITimelineStateObserver__Array {
        inline app::ITimelineStateObserver__Array__Class** type_info() {
            static app::ITimelineStateObserver__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ITimelineStateObserver__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ITimelineStateObserver__Array__Class* get_class() {
            return il2cpp::get_class<app::ITimelineStateObserver__Array__Class>(type_info(), "Moon.Timeline", "ITimelineStateObserver[]");
        }
        inline app::ITimelineStateObserver__Array* create() {
            return il2cpp::create_object<app::ITimelineStateObserver__Array>(get_class());
        }
    } // namespace ITimelineStateObserver__Array
} // namespace app::classes::types
