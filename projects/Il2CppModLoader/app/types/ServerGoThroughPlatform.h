#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ServerGoThroughPlatform {
        namespace {
            app::ServerGoThroughPlatform__Class* type_info_ref = nullptr;
        }
        app::ServerGoThroughPlatform__Class** type_info = &type_info_ref;
        inline app::ServerGoThroughPlatform__Class* get_class() {
            return il2cpp::get_class<app::ServerGoThroughPlatform__Class>(type_info, "", "ServerGoThroughPlatform");
        }
        inline app::ServerGoThroughPlatform* create() {
            return il2cpp::create_object<app::ServerGoThroughPlatform>(get_class());
        }
    } // namespace ServerGoThroughPlatform
} // namespace app::classes::types
