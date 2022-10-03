#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UberPoolAnalyze {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UberPoolAnalyze__Class** type_info;
        inline app::UberPoolAnalyze__Class* get_class() {
            return il2cpp::get_class<app::UberPoolAnalyze__Class>(type_info, "", "UberPoolAnalyze");
        }
        inline app::UberPoolAnalyze* create() {
            return il2cpp::create_object<app::UberPoolAnalyze>(get_class());
        }
    } // namespace UberPoolAnalyze
} // namespace app::classes::types
