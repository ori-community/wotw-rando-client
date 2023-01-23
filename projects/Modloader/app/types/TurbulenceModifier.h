#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/TurbulenceModifier__Class.h>
#include <Modloader/app/structs/TurbulenceModifier.h>

namespace app::classes::types {
    namespace TurbulenceModifier {
        namespace {
            inline app::TurbulenceModifier__Class* type_info_ref = nullptr;
        }
        inline app::TurbulenceModifier__Class** type_info = &type_info_ref;
        inline app::TurbulenceModifier__Class* get_class() {
            return il2cpp::get_class<app::TurbulenceModifier__Class>(type_info, "", "TurbulenceModifier");
        }
        inline app::TurbulenceModifier* create() {
            return il2cpp::create_object<app::TurbulenceModifier>(get_class());
        }
    } // namespace TurbulenceModifier
} // namespace app::classes::types
