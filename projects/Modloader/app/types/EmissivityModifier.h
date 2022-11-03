#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace EmissivityModifier {
        namespace {
            inline app::EmissivityModifier__Class* type_info_ref = nullptr;
        }
        inline app::EmissivityModifier__Class** type_info = &type_info_ref;
        inline app::EmissivityModifier__Class* get_class() {
            return il2cpp::get_class<app::EmissivityModifier__Class>(type_info, "", "EmissivityModifier");
        }
        inline app::EmissivityModifier* create() {
            return il2cpp::create_object<app::EmissivityModifier>(get_class());
        }
    } // namespace EmissivityModifier
} // namespace app::classes::types
