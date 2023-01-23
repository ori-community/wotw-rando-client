#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ConditionalPlatform__Class.h>
#include <Modloader/app/structs/ConditionalPlatform.h>

namespace app::classes::types {
    namespace ConditionalPlatform {
        namespace {
            inline app::ConditionalPlatform__Class* type_info_ref = nullptr;
        }
        inline app::ConditionalPlatform__Class** type_info = &type_info_ref;
        inline app::ConditionalPlatform__Class* get_class() {
            return il2cpp::get_class<app::ConditionalPlatform__Class>(type_info, "Moon", "ConditionalPlatform");
        }
        inline app::ConditionalPlatform* create() {
            return il2cpp::create_object<app::ConditionalPlatform>(get_class());
        }
    } // namespace ConditionalPlatform
} // namespace app::classes::types
