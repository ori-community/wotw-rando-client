#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ControllerShake {
        namespace {
            inline app::ControllerShake__Class* type_info_ref = nullptr;
        }
        inline app::ControllerShake__Class** type_info = &type_info_ref;
        inline app::ControllerShake__Class* get_class() {
            return il2cpp::get_class<app::ControllerShake__Class>(type_info, "", "ControllerShake");
        }
        inline app::ControllerShake* create() {
            return il2cpp::create_object<app::ControllerShake>(get_class());
        }
    } // namespace ControllerShake
} // namespace app::classes::types
