#pragma once
#include <Modloader/app/structs/ContinuousTimelineSequenceBehaviour.h>
#include <Modloader/app/structs/ContinuousTimelineSequenceBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ContinuousTimelineSequenceBehaviour {
        inline app::ContinuousTimelineSequenceBehaviour__Class** type_info() {
            static app::ContinuousTimelineSequenceBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ContinuousTimelineSequenceBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ContinuousTimelineSequenceBehaviour__Class* get_class() {
            return il2cpp::get_class<app::ContinuousTimelineSequenceBehaviour__Class>(type_info(), "", "ContinuousTimelineSequenceBehaviour");
        }
        inline app::ContinuousTimelineSequenceBehaviour* create() {
            return il2cpp::create_object<app::ContinuousTimelineSequenceBehaviour>(get_class());
        }
    } // namespace ContinuousTimelineSequenceBehaviour
} // namespace app::classes::types
