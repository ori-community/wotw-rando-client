#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ContinuousTimelineSequenceBehaviour {
        namespace {
            app::ContinuousTimelineSequenceBehaviour__Class* type_info_ref = nullptr;
        }
        app::ContinuousTimelineSequenceBehaviour__Class** type_info = &type_info_ref;
        inline app::ContinuousTimelineSequenceBehaviour__Class* get_class() {
            return il2cpp::get_class<app::ContinuousTimelineSequenceBehaviour__Class>(type_info, "", "ContinuousTimelineSequenceBehaviour");
        }
        inline app::ContinuousTimelineSequenceBehaviour* create() {
            return il2cpp::create_object<app::ContinuousTimelineSequenceBehaviour>(get_class());
        }
    } // namespace ContinuousTimelineSequenceBehaviour
} // namespace app::classes::types
