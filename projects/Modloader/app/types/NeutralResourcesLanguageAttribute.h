#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace NeutralResourcesLanguageAttribute {
        namespace {
            inline app::NeutralResourcesLanguageAttribute__Class* type_info_ref = nullptr;
        }
        inline app::NeutralResourcesLanguageAttribute__Class** type_info = &type_info_ref;
        inline app::NeutralResourcesLanguageAttribute__Class* get_class() {
            return il2cpp::get_class<app::NeutralResourcesLanguageAttribute__Class>(type_info, "System.Resources", "NeutralResourcesLanguageAttribute");
        }
        inline app::NeutralResourcesLanguageAttribute* create() {
            return il2cpp::create_object<app::NeutralResourcesLanguageAttribute>(get_class());
        }
    } // namespace NeutralResourcesLanguageAttribute
} // namespace app::classes::types
