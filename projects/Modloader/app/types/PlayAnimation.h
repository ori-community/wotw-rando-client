#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace PlayAnimation {
        namespace {
            inline app::PlayAnimation__Class* type_info_ref = nullptr;
        }
        inline app::PlayAnimation__Class** type_info = &type_info_ref;
        inline app::PlayAnimation__Class* get_class() {
            return il2cpp::get_class<app::PlayAnimation__Class>(type_info, "", "PlayAnimation");
        }
        inline app::PlayAnimation* create() {
            return il2cpp::create_object<app::PlayAnimation>(get_class());
        }
    } // namespace PlayAnimation
} // namespace app::classes::types
