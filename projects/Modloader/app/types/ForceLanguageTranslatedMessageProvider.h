#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ForceLanguageTranslatedMessageProvider__Class.h>
#include <Modloader/app/structs/ForceLanguageTranslatedMessageProvider.h>

namespace app::classes::types {
    namespace ForceLanguageTranslatedMessageProvider {
        namespace {
            inline app::ForceLanguageTranslatedMessageProvider__Class* type_info_ref = nullptr;
        }
        inline app::ForceLanguageTranslatedMessageProvider__Class** type_info = &type_info_ref;
        inline app::ForceLanguageTranslatedMessageProvider__Class* get_class() {
            return il2cpp::get_class<app::ForceLanguageTranslatedMessageProvider__Class>(type_info, "", "ForceLanguageTranslatedMessageProvider");
        }
        inline app::ForceLanguageTranslatedMessageProvider* create() {
            return il2cpp::create_object<app::ForceLanguageTranslatedMessageProvider>(get_class());
        }
    } // namespace ForceLanguageTranslatedMessageProvider
} // namespace app::classes::types
