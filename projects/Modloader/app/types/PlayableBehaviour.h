#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace PlayableBehaviour {
        namespace {
            inline app::PlayableBehaviour__Class* type_info_ref = nullptr;
        }
        inline app::PlayableBehaviour__Class** type_info = &type_info_ref;
        inline app::PlayableBehaviour__Class* get_class() {
            return il2cpp::get_class<app::PlayableBehaviour__Class>(type_info, "UnityEngine.Playables", "PlayableBehaviour");
        }
        inline app::PlayableBehaviour* create() {
            return il2cpp::create_object<app::PlayableBehaviour>(get_class());
        }
    } // namespace PlayableBehaviour
} // namespace app::classes::types
