#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ExternalTimelineRecord__Array {
        namespace {
            inline app::ExternalTimelineRecord__Array__Class* type_info_ref = nullptr;
        }
        inline app::ExternalTimelineRecord__Array__Class** type_info = &type_info_ref;
        inline app::ExternalTimelineRecord__Array__Class* get_class() {
            return il2cpp::get_class<app::ExternalTimelineRecord__Array__Class>(type_info, "Moon.Timeline", "ExternalTimelineRecord[]");
        }
        inline app::ExternalTimelineRecord__Array* create() {
            return il2cpp::create_object<app::ExternalTimelineRecord__Array>(get_class());
        }
    } // namespace ExternalTimelineRecord__Array
} // namespace app::classes::types
