#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace FormatterConverter {
        extern IL2CPP_MODLOADER_DLLEXPORT app::FormatterConverter__Class** type_info;
        inline app::FormatterConverter__Class* get_class() {
            return il2cpp::get_class<app::FormatterConverter__Class>(type_info, "System.Runtime.Serialization", "FormatterConverter");
        }
        inline app::FormatterConverter* create() {
            return il2cpp::create_object<app::FormatterConverter>(get_class());
        }
    } // namespace FormatterConverter
} // namespace app::classes::types
