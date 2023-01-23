#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/DofZoneModifier__Class.h>
#include <Modloader/app/structs/DofZoneModifier.h>

namespace app::classes::types {
    namespace DofZoneModifier {
        namespace {
            inline app::DofZoneModifier__Class* type_info_ref = nullptr;
        }
        inline app::DofZoneModifier__Class** type_info = &type_info_ref;
        inline app::DofZoneModifier__Class* get_class() {
            return il2cpp::get_class<app::DofZoneModifier__Class>(type_info, "", "DofZoneModifier");
        }
        inline app::DofZoneModifier* create() {
            return il2cpp::create_object<app::DofZoneModifier>(get_class());
        }
    } // namespace DofZoneModifier
} // namespace app::classes::types
