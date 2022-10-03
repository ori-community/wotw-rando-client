#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BossCameraTarget {
        namespace {
            app::BossCameraTarget__Class* type_info_ref = nullptr;
        }
        app::BossCameraTarget__Class** type_info = &type_info_ref;
        inline app::BossCameraTarget__Class* get_class() {
            return il2cpp::get_class<app::BossCameraTarget__Class>(type_info, "", "BossCameraTarget");
        }
        inline app::BossCameraTarget* create() {
            return il2cpp::create_object<app::BossCameraTarget>(get_class());
        }
    } // namespace BossCameraTarget
} // namespace app::classes::types
