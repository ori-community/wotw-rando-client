#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace XalPostProcess {
        namespace {
            inline app::XalPostProcess__Class* type_info_ref = nullptr;
        }
        inline app::XalPostProcess__Class** type_info = &type_info_ref;
        inline app::XalPostProcess__Class* get_class() {
            return il2cpp::get_class<app::XalPostProcess__Class>(type_info, "", "XalPostProcess");
        }
        inline app::XalPostProcess* create() {
            return il2cpp::create_object<app::XalPostProcess>(get_class());
        }
    } // namespace XalPostProcess
} // namespace app::classes::types
