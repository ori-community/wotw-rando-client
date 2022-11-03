#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace LightPlatform__Array {
        namespace {
            inline app::LightPlatform__Array__Class* type_info_ref = nullptr;
        }
        inline app::LightPlatform__Array__Class** type_info = &type_info_ref;
        inline app::LightPlatform__Array__Class* get_class() {
            return il2cpp::get_class<app::LightPlatform__Array__Class>(type_info, "", "LightPlatform[]");
        }
        inline app::LightPlatform__Array* create() {
            return il2cpp::create_object<app::LightPlatform__Array>(get_class());
        }
    } // namespace LightPlatform__Array
} // namespace app::classes::types
