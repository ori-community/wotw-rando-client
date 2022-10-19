#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ForceLanguageTranslatedMessageProvider_GetMessages_d_1 {
        inline app::ForceLanguageTranslatedMessageProvider_GetMessages_d_1__Class** type_info = (app::ForceLanguageTranslatedMessageProvider_GetMessages_d_1__Class**)(modloader::win::memory::resolve_rva(0x04750618));
        inline app::ForceLanguageTranslatedMessageProvider_GetMessages_d_1__Class* get_class() {
            return il2cpp::get_nested_class<app::ForceLanguageTranslatedMessageProvider_GetMessages_d_1__Class>(type_info, "", "ForceLanguageTranslatedMessageProvider", "<GetMessages>d__1");
        }
        inline app::ForceLanguageTranslatedMessageProvider_GetMessages_d_1* create() {
            return il2cpp::create_object<app::ForceLanguageTranslatedMessageProvider_GetMessages_d_1>(get_class());
        }
    } // namespace ForceLanguageTranslatedMessageProvider_GetMessages_d_1
} // namespace app::classes::types
