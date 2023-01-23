#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ILegacyTimelineStateObserver__Array__Class.h>
#include <Modloader/app/structs/ILegacyTimelineStateObserver__Array.h>

namespace app::classes::types {
    namespace ILegacyTimelineStateObserver__Array {
        namespace {
            inline app::ILegacyTimelineStateObserver__Array__Class* type_info_ref = nullptr;
        }
        inline app::ILegacyTimelineStateObserver__Array__Class** type_info = &type_info_ref;
        inline app::ILegacyTimelineStateObserver__Array__Class* get_class() {
            return il2cpp::get_class<app::ILegacyTimelineStateObserver__Array__Class>(type_info, "Moon.Timeline", "ILegacyTimelineStateObserver[]");
        }
        inline app::ILegacyTimelineStateObserver__Array* create() {
            return il2cpp::create_object<app::ILegacyTimelineStateObserver__Array>(get_class());
        }
    } // namespace ILegacyTimelineStateObserver__Array
} // namespace app::classes::types
