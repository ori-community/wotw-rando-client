#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/TrailModifier__Class.h>
#include <Modloader/app/structs/TrailModifier.h>

namespace app::classes::types {
    namespace TrailModifier {
        namespace {
            inline app::TrailModifier__Class* type_info_ref = nullptr;
        }
        inline app::TrailModifier__Class** type_info = &type_info_ref;
        inline app::TrailModifier__Class* get_class() {
            return il2cpp::get_class<app::TrailModifier__Class>(type_info, "", "TrailModifier");
        }
        inline app::TrailModifier* create() {
            return il2cpp::create_object<app::TrailModifier>(get_class());
        }
    } // namespace TrailModifier
} // namespace app::classes::types
