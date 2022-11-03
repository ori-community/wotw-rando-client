#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace OneShotTimelineSequenceBehaviour {
        namespace {
            inline app::OneShotTimelineSequenceBehaviour__Class* type_info_ref = nullptr;
        }
        inline app::OneShotTimelineSequenceBehaviour__Class** type_info = &type_info_ref;
        inline app::OneShotTimelineSequenceBehaviour__Class* get_class() {
            return il2cpp::get_class<app::OneShotTimelineSequenceBehaviour__Class>(type_info, "", "OneShotTimelineSequenceBehaviour");
        }
        inline app::OneShotTimelineSequenceBehaviour* create() {
            return il2cpp::create_object<app::OneShotTimelineSequenceBehaviour>(get_class());
        }
    } // namespace OneShotTimelineSequenceBehaviour
} // namespace app::classes::types
