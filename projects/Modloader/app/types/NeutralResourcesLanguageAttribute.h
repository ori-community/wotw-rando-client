#pragma once
#include <Modloader/app/structs/NeutralResourcesLanguageAttribute.h>
#include <Modloader/app/structs/NeutralResourcesLanguageAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace NeutralResourcesLanguageAttribute {
        inline app::NeutralResourcesLanguageAttribute__Class** type_info() {
            static app::NeutralResourcesLanguageAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::NeutralResourcesLanguageAttribute__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::NeutralResourcesLanguageAttribute__Class* get_class() {
            return il2cpp::get_class<app::NeutralResourcesLanguageAttribute__Class>(type_info(), "System.Resources", "NeutralResourcesLanguageAttribute");
        }
        inline app::NeutralResourcesLanguageAttribute* create() {
            return il2cpp::create_object<app::NeutralResourcesLanguageAttribute>(get_class());
        }
    } // namespace NeutralResourcesLanguageAttribute
} // namespace app::classes::types
