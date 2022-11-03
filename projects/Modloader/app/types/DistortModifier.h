#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace DistortModifier {
        namespace {
            inline app::DistortModifier__Class* type_info_ref = nullptr;
        }
        inline app::DistortModifier__Class** type_info = &type_info_ref;
        inline app::DistortModifier__Class* get_class() {
            return il2cpp::get_class<app::DistortModifier__Class>(type_info, "", "DistortModifier");
        }
        inline app::DistortModifier* create() {
            return il2cpp::create_object<app::DistortModifier>(get_class());
        }
    } // namespace DistortModifier
} // namespace app::classes::types
