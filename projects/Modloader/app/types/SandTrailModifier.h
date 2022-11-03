#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SandTrailModifier {
        namespace {
            inline app::SandTrailModifier__Class* type_info_ref = nullptr;
        }
        inline app::SandTrailModifier__Class** type_info = &type_info_ref;
        inline app::SandTrailModifier__Class* get_class() {
            return il2cpp::get_class<app::SandTrailModifier__Class>(type_info, "", "SandTrailModifier");
        }
        inline app::SandTrailModifier* create() {
            return il2cpp::create_object<app::SandTrailModifier>(get_class());
        }
    } // namespace SandTrailModifier
} // namespace app::classes::types
