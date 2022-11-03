#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace AnimatorControllerParameter {
        inline app::AnimatorControllerParameter__Class** type_info = (app::AnimatorControllerParameter__Class**)(modloader::win::memory::resolve_rva(0x0473F270));
        inline app::AnimatorControllerParameter__Class* get_class() {
            return il2cpp::get_class<app::AnimatorControllerParameter__Class>(type_info, "UnityEngine", "AnimatorControllerParameter");
        }
        inline app::AnimatorControllerParameter* create() {
            return il2cpp::create_object<app::AnimatorControllerParameter>(get_class());
        }
        inline app::AnimatorControllerParameter__Array* create_array(int size) {
            return il2cpp::array_new<app::AnimatorControllerParameter__Array>(get_class(), size);
        }
        inline app::AnimatorControllerParameter__Array* create_array(const std::vector<app::AnimatorControllerParameter*>& items) {
            return il2cpp::array_new<app::AnimatorControllerParameter__Array>(get_class(), items);
        }
    } // namespace AnimatorControllerParameter
} // namespace app::classes::types
