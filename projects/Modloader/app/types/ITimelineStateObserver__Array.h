#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ITimelineStateObserver__Array__Class.h>
#include <Modloader/app/structs/ITimelineStateObserver__Array.h>

namespace app::classes::types {
    namespace ITimelineStateObserver__Array {
        namespace {
            inline app::ITimelineStateObserver__Array__Class* type_info_ref = nullptr;
        }
        inline app::ITimelineStateObserver__Array__Class** type_info = &type_info_ref;
        inline app::ITimelineStateObserver__Array__Class* get_class() {
            return il2cpp::get_class<app::ITimelineStateObserver__Array__Class>(type_info, "Moon.Timeline", "ITimelineStateObserver[]");
        }
        inline app::ITimelineStateObserver__Array* create() {
            return il2cpp::create_object<app::ITimelineStateObserver__Array>(get_class());
        }
    } // namespace ITimelineStateObserver__Array
} // namespace app::classes::types
