#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RiseSinkPlatform {
        namespace {
            app::RiseSinkPlatform__Class* type_info_ref = nullptr;
        }
        app::RiseSinkPlatform__Class** type_info = &type_info_ref;
        inline app::RiseSinkPlatform__Class* get_class() {
            return il2cpp::get_class<app::RiseSinkPlatform__Class>(type_info, "", "RiseSinkPlatform");
        }
        inline app::RiseSinkPlatform* create() {
            return il2cpp::create_object<app::RiseSinkPlatform>(get_class());
        }
    } // namespace RiseSinkPlatform
} // namespace app::classes::types
