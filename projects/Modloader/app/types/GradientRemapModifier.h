#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/GradientRemapModifier__Class.h>
#include <Modloader/app/structs/GradientRemapModifier.h>

namespace app::classes::types {
    namespace GradientRemapModifier {
        namespace {
            inline app::GradientRemapModifier__Class* type_info_ref = nullptr;
        }
        inline app::GradientRemapModifier__Class** type_info = &type_info_ref;
        inline app::GradientRemapModifier__Class* get_class() {
            return il2cpp::get_class<app::GradientRemapModifier__Class>(type_info, "", "GradientRemapModifier");
        }
        inline app::GradientRemapModifier* create() {
            return il2cpp::create_object<app::GradientRemapModifier>(get_class());
        }
    } // namespace GradientRemapModifier
} // namespace app::classes::types
