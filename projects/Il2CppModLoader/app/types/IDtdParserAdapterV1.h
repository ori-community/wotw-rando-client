#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IDtdParserAdapterV1 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IDtdParserAdapterV1__Class** type_info;
        inline app::IDtdParserAdapterV1__Class* get_class() {
            return il2cpp::get_class<app::IDtdParserAdapterV1__Class>(type_info, "System.Xml", "IDtdParserAdapterV1");
        }
        inline app::IDtdParserAdapterV1* create() {
            return il2cpp::create_object<app::IDtdParserAdapterV1>(get_class());
        }
    } // namespace IDtdParserAdapterV1
} // namespace app::classes::types
