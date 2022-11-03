#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace GameplayCamera {
        namespace {
            inline app::GameplayCamera__Class* type_info_ref = nullptr;
        }
        inline app::GameplayCamera__Class** type_info = &type_info_ref;
        inline app::GameplayCamera__Class* get_class() {
            return il2cpp::get_class<app::GameplayCamera__Class>(type_info, "", "GameplayCamera");
        }
        inline app::GameplayCamera* create() {
            return il2cpp::create_object<app::GameplayCamera>(get_class());
        }
    } // namespace GameplayCamera
} // namespace app::classes::types
