#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/GodRayModifier__Array__Class.h>
#include <Modloader/app/structs/GodRayModifier__Array.h>

namespace app::classes::types {
    namespace GodRayModifier__Array {
        namespace {
            inline app::GodRayModifier__Array__Class* type_info_ref = nullptr;
        }
        inline app::GodRayModifier__Array__Class** type_info = &type_info_ref;
        inline app::GodRayModifier__Array__Class* get_class() {
            return il2cpp::get_class<app::GodRayModifier__Array__Class>(type_info, "", "GodRayModifier[]");
        }
        inline app::GodRayModifier__Array* create() {
            return il2cpp::create_object<app::GodRayModifier__Array>(get_class());
        }
    } // namespace GodRayModifier__Array
} // namespace app::classes::types
