#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ExternalTimelineEntity__Array__Class.h>
#include <Modloader/app/structs/ExternalTimelineEntity__Array.h>

namespace app::classes::types {
    namespace ExternalTimelineEntity__Array {
        namespace {
            inline app::ExternalTimelineEntity__Array__Class* type_info_ref = nullptr;
        }
        inline app::ExternalTimelineEntity__Array__Class** type_info = &type_info_ref;
        inline app::ExternalTimelineEntity__Array__Class* get_class() {
            return il2cpp::get_class<app::ExternalTimelineEntity__Array__Class>(type_info, "Moon.Timeline", "ExternalTimelineEntity[]");
        }
        inline app::ExternalTimelineEntity__Array* create() {
            return il2cpp::create_object<app::ExternalTimelineEntity__Array>(get_class());
        }
    } // namespace ExternalTimelineEntity__Array
} // namespace app::classes::types
