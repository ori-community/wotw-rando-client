#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/TurbulenceTransparencyModifier__Class.h>
#include <Modloader/app/structs/TurbulenceTransparencyModifier.h>

namespace app::classes::types {
    namespace TurbulenceTransparencyModifier {
        namespace {
            inline app::TurbulenceTransparencyModifier__Class* type_info_ref = nullptr;
        }
        inline app::TurbulenceTransparencyModifier__Class** type_info = &type_info_ref;
        inline app::TurbulenceTransparencyModifier__Class* get_class() {
            return il2cpp::get_class<app::TurbulenceTransparencyModifier__Class>(type_info, "", "TurbulenceTransparencyModifier");
        }
        inline app::TurbulenceTransparencyModifier* create() {
            return il2cpp::create_object<app::TurbulenceTransparencyModifier>(get_class());
        }
    } // namespace TurbulenceTransparencyModifier
} // namespace app::classes::types
