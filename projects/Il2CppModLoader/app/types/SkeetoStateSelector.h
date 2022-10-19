#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SkeetoStateSelector {
        namespace {
            inline app::SkeetoStateSelector__Class* type_info_ref = nullptr;
        }
        inline app::SkeetoStateSelector__Class** type_info = &type_info_ref;
        inline app::SkeetoStateSelector__Class* get_class() {
            return il2cpp::get_class<app::SkeetoStateSelector__Class>(type_info, "", "SkeetoStateSelector");
        }
        inline app::SkeetoStateSelector* create() {
            return il2cpp::create_object<app::SkeetoStateSelector>(get_class());
        }
    } // namespace SkeetoStateSelector
} // namespace app::classes::types
