#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/DisabledProperty__Class.h>
#include <Modloader/app/structs/DisabledProperty.h>

namespace app::classes::types {
    namespace DisabledProperty {
        namespace {
            inline app::DisabledProperty__Class* type_info_ref = nullptr;
        }
        inline app::DisabledProperty__Class** type_info = &type_info_ref;
        inline app::DisabledProperty__Class* get_class() {
            return il2cpp::get_class<app::DisabledProperty__Class>(type_info, "UberShader", "DisabledProperty");
        }
        inline app::DisabledProperty* create() {
            return il2cpp::create_object<app::DisabledProperty>(get_class());
        }
    } // namespace DisabledProperty
} // namespace app::classes::types
