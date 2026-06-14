#pragma once
#include <Modloader/app/structs/OneShotTimelineSequenceBehaviour.h>
#include <Modloader/app/structs/OneShotTimelineSequenceBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace OneShotTimelineSequenceBehaviour {
        inline app::OneShotTimelineSequenceBehaviour__Class** type_info() {
            static app::OneShotTimelineSequenceBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::OneShotTimelineSequenceBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::OneShotTimelineSequenceBehaviour__Class* get_class() {
            return il2cpp::get_class<app::OneShotTimelineSequenceBehaviour__Class>(type_info(), "", "OneShotTimelineSequenceBehaviour");
        }
        inline app::OneShotTimelineSequenceBehaviour* create() {
            return il2cpp::create_object<app::OneShotTimelineSequenceBehaviour>(get_class());
        }
    } // namespace OneShotTimelineSequenceBehaviour
} // namespace app::classes::types
