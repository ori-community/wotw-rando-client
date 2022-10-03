#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GetStat {
        namespace {
            app::GetStat__Class* type_info_ref = nullptr;
        }
        app::GetStat__Class** type_info = &type_info_ref;
        inline app::GetStat__Class* get_class() {
            return il2cpp::get_class<app::GetStat__Class>(type_info, "", "GetStat");
        }
        inline app::GetStat* create() {
            return il2cpp::create_object<app::GetStat>(get_class());
        }
    } // namespace GetStat
} // namespace app::classes::types
