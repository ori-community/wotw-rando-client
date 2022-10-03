#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MessageParserUtility {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MessageParserUtility__Class** type_info;
        inline app::MessageParserUtility__Class* get_class() {
            return il2cpp::get_class<app::MessageParserUtility__Class>(type_info, "", "MessageParserUtility");
        }
        inline app::MessageParserUtility* create() {
            return il2cpp::create_object<app::MessageParserUtility>(get_class());
        }
    } // namespace MessageParserUtility
} // namespace app::classes::types
