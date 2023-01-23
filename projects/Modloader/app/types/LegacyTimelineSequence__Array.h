#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/LegacyTimelineSequence__Array__Class.h>
#include <Modloader/app/structs/LegacyTimelineSequence__Array.h>

namespace app::classes::types {
    namespace LegacyTimelineSequence__Array {
        namespace {
            inline app::LegacyTimelineSequence__Array__Class* type_info_ref = nullptr;
        }
        inline app::LegacyTimelineSequence__Array__Class** type_info = &type_info_ref;
        inline app::LegacyTimelineSequence__Array__Class* get_class() {
            return il2cpp::get_class<app::LegacyTimelineSequence__Array__Class>(type_info, "", "LegacyTimelineSequence[]");
        }
        inline app::LegacyTimelineSequence__Array* create() {
            return il2cpp::create_object<app::LegacyTimelineSequence__Array>(get_class());
        }
    } // namespace LegacyTimelineSequence__Array
} // namespace app::classes::types
