#pragma once
#include <Modloader/app/structs/ForceLanguageTranslatedMessageProvider.h>
#include <Modloader/app/structs/ForceLanguageTranslatedMessageProvider__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ForceLanguageTranslatedMessageProvider {
        inline app::ForceLanguageTranslatedMessageProvider__Class** type_info() {
            static app::ForceLanguageTranslatedMessageProvider__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ForceLanguageTranslatedMessageProvider__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ForceLanguageTranslatedMessageProvider__Class* get_class() {
            return il2cpp::get_class<app::ForceLanguageTranslatedMessageProvider__Class>(type_info(), "", "ForceLanguageTranslatedMessageProvider");
        }
        inline app::ForceLanguageTranslatedMessageProvider* create() {
            return il2cpp::create_object<app::ForceLanguageTranslatedMessageProvider>(get_class());
        }
    } // namespace ForceLanguageTranslatedMessageProvider
} // namespace app::classes::types
