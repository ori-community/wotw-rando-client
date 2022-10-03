#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace FormatterData {
        extern IL2CPP_MODLOADER_DLLEXPORT app::FormatterData__Class** type_info;
        inline app::FormatterData__Class* get_class() {
            return il2cpp::get_class<app::FormatterData__Class>(type_info, "System.Runtime.Remoting", "FormatterData");
        }
        inline app::FormatterData* create() {
            return il2cpp::create_object<app::FormatterData>(get_class());
        }
    } // namespace FormatterData
} // namespace app::classes::types
