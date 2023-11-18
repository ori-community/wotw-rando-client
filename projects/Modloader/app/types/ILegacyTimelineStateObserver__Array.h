#pragma once
#include <Modloader/app/structs/ILegacyTimelineStateObserver__Array.h>
#include <Modloader/app/structs/ILegacyTimelineStateObserver__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ILegacyTimelineStateObserver__Array {
        inline app::ILegacyTimelineStateObserver__Array__Class** type_info() {
            static app::ILegacyTimelineStateObserver__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ILegacyTimelineStateObserver__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ILegacyTimelineStateObserver__Array__Class* get_class() {
            return il2cpp::get_class<app::ILegacyTimelineStateObserver__Array__Class>(type_info(), "Moon.Timeline", "ILegacyTimelineStateObserver[]");
        }
        inline app::ILegacyTimelineStateObserver__Array* create() {
            return il2cpp::create_object<app::ILegacyTimelineStateObserver__Array>(get_class());
        }
    } // namespace ILegacyTimelineStateObserver__Array
} // namespace app::classes::types
