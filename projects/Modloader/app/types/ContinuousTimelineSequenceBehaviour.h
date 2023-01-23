#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ContinuousTimelineSequenceBehaviour__Class.h>
#include <Modloader/app/structs/ContinuousTimelineSequenceBehaviour.h>

namespace app::classes::types {
    namespace ContinuousTimelineSequenceBehaviour {
        namespace {
            inline app::ContinuousTimelineSequenceBehaviour__Class* type_info_ref = nullptr;
        }
        inline app::ContinuousTimelineSequenceBehaviour__Class** type_info = &type_info_ref;
        inline app::ContinuousTimelineSequenceBehaviour__Class* get_class() {
            return il2cpp::get_class<app::ContinuousTimelineSequenceBehaviour__Class>(type_info, "", "ContinuousTimelineSequenceBehaviour");
        }
        inline app::ContinuousTimelineSequenceBehaviour* create() {
            return il2cpp::create_object<app::ContinuousTimelineSequenceBehaviour>(get_class());
        }
    } // namespace ContinuousTimelineSequenceBehaviour
} // namespace app::classes::types
