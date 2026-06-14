#pragma once
#include <Modloader/app/structs/ForceLanguageTranslatedMessageProvider_GetMessages_d_1.h>
#include <Modloader/app/structs/ForceLanguageTranslatedMessageProvider_GetMessages_d_1__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ForceLanguageTranslatedMessageProvider_GetMessages_d_1 {
        inline app::ForceLanguageTranslatedMessageProvider_GetMessages_d_1__Class** type_info() {
            static app::ForceLanguageTranslatedMessageProvider_GetMessages_d_1__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ForceLanguageTranslatedMessageProvider_GetMessages_d_1__Class**)(modloader::win::memory::resolve_rva(0x04750618));
            }
            return cache;
        }
        inline app::ForceLanguageTranslatedMessageProvider_GetMessages_d_1__Class* get_class() {
            return il2cpp::get_nested_class<app::ForceLanguageTranslatedMessageProvider_GetMessages_d_1__Class>(type_info(), "", "ForceLanguageTranslatedMessageProvider", "<GetMessages>d__1");
        }
        inline app::ForceLanguageTranslatedMessageProvider_GetMessages_d_1* create() {
            return il2cpp::create_object<app::ForceLanguageTranslatedMessageProvider_GetMessages_d_1>(get_class());
        }
    } // namespace ForceLanguageTranslatedMessageProvider_GetMessages_d_1
} // namespace app::classes::types
