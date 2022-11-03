#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace TimelineSequenceLabel__Array {
        namespace {
            inline app::TimelineSequenceLabel__Array__Class* type_info_ref = nullptr;
        }
        inline app::TimelineSequenceLabel__Array__Class** type_info = &type_info_ref;
        inline app::TimelineSequenceLabel__Array__Class* get_class() {
            return il2cpp::get_class<app::TimelineSequenceLabel__Array__Class>(type_info, "", "TimelineSequenceLabel[]");
        }
        inline app::TimelineSequenceLabel__Array* create() {
            return il2cpp::create_object<app::TimelineSequenceLabel__Array>(get_class());
        }
    } // namespace TimelineSequenceLabel__Array
} // namespace app::classes::types
