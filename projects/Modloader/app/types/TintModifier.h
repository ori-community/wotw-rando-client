#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace TintModifier {
        namespace {
            inline app::TintModifier__Class* type_info_ref = nullptr;
        }
        inline app::TintModifier__Class** type_info = &type_info_ref;
        inline app::TintModifier__Class* get_class() {
            return il2cpp::get_class<app::TintModifier__Class>(type_info, "", "TintModifier");
        }
        inline app::TintModifier* create() {
            return il2cpp::create_object<app::TintModifier>(get_class());
        }
    } // namespace TintModifier
} // namespace app::classes::types
