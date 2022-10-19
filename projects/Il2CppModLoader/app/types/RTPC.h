#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace RTPC {
        namespace {
            inline app::RTPC__Class* type_info_ref = nullptr;
        }
        inline app::RTPC__Class** type_info = &type_info_ref;
        inline app::RTPC__Class* get_class() {
            return il2cpp::get_class<app::RTPC__Class>(type_info, "AK.Wwise", "RTPC");
        }
        inline app::RTPC* create() {
            return il2cpp::create_object<app::RTPC>(get_class());
        }
    } // namespace RTPC
} // namespace app::classes::types
