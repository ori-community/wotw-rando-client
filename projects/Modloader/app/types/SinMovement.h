#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SinMovement {
        namespace {
            inline app::SinMovement__Class* type_info_ref = nullptr;
        }
        inline app::SinMovement__Class** type_info = &type_info_ref;
        inline app::SinMovement__Class* get_class() {
            return il2cpp::get_class<app::SinMovement__Class>(type_info, "", "SinMovement");
        }
        inline app::SinMovement* create() {
            return il2cpp::create_object<app::SinMovement>(get_class());
        }
    } // namespace SinMovement
} // namespace app::classes::types
