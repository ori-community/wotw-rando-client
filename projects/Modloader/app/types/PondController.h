#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace PondController {
        namespace {
            inline app::PondController__Class* type_info_ref = nullptr;
        }
        inline app::PondController__Class** type_info = &type_info_ref;
        inline app::PondController__Class* get_class() {
            return il2cpp::get_class<app::PondController__Class>(type_info, "", "PondController");
        }
        inline app::PondController* create() {
            return il2cpp::create_object<app::PondController>(get_class());
        }
    } // namespace PondController
} // namespace app::classes::types
