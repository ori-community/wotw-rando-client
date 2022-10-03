#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace NormalizationTableUtil {
        extern IL2CPP_MODLOADER_DLLEXPORT app::NormalizationTableUtil__Class** type_info;
        inline app::NormalizationTableUtil__Class* get_class() {
            return il2cpp::get_class<app::NormalizationTableUtil__Class>(type_info, "Mono.Globalization.Unicode", "NormalizationTableUtil");
        }
        inline app::NormalizationTableUtil* create() {
            return il2cpp::create_object<app::NormalizationTableUtil>(get_class());
        }
    } // namespace NormalizationTableUtil
} // namespace app::classes::types
