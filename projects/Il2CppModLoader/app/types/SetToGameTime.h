#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SetToGameTime {
        namespace {
            inline app::SetToGameTime__Class* type_info_ref = nullptr;
        }
        inline app::SetToGameTime__Class** type_info = &type_info_ref;
        inline app::SetToGameTime__Class* get_class() {
            return il2cpp::get_class<app::SetToGameTime__Class>(type_info, "", "SetToGameTime");
        }
        inline app::SetToGameTime* create() {
            return il2cpp::create_object<app::SetToGameTime>(get_class());
        }
    } // namespace SetToGameTime
} // namespace app::classes::types
