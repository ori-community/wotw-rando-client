#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/MinimalTrailModifier__Class.h>
#include <Modloader/app/structs/MinimalTrailModifier.h>

namespace app::classes::types {
    namespace MinimalTrailModifier {
        namespace {
            inline app::MinimalTrailModifier__Class* type_info_ref = nullptr;
        }
        inline app::MinimalTrailModifier__Class** type_info = &type_info_ref;
        inline app::MinimalTrailModifier__Class* get_class() {
            return il2cpp::get_class<app::MinimalTrailModifier__Class>(type_info, "", "MinimalTrailModifier");
        }
        inline app::MinimalTrailModifier* create() {
            return il2cpp::create_object<app::MinimalTrailModifier>(get_class());
        }
    } // namespace MinimalTrailModifier
} // namespace app::classes::types
