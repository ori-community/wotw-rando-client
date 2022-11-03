#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace OnScreenPositionSetter {
        namespace {
            inline app::OnScreenPositionSetter__Class* type_info_ref = nullptr;
        }
        inline app::OnScreenPositionSetter__Class** type_info = &type_info_ref;
        inline app::OnScreenPositionSetter__Class* get_class() {
            return il2cpp::get_class<app::OnScreenPositionSetter__Class>(type_info, "", "OnScreenPositionSetter");
        }
        inline app::OnScreenPositionSetter* create() {
            return il2cpp::create_object<app::OnScreenPositionSetter>(get_class());
        }
    } // namespace OnScreenPositionSetter
} // namespace app::classes::types
