#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IgnoreGoThroughPlatforms {
        namespace {
            app::IgnoreGoThroughPlatforms__Class* type_info_ref = nullptr;
        }
        app::IgnoreGoThroughPlatforms__Class** type_info = &type_info_ref;
        inline app::IgnoreGoThroughPlatforms__Class* get_class() {
            return il2cpp::get_class<app::IgnoreGoThroughPlatforms__Class>(type_info, "", "IgnoreGoThroughPlatforms");
        }
        inline app::IgnoreGoThroughPlatforms* create() {
            return il2cpp::create_object<app::IgnoreGoThroughPlatforms>(get_class());
        }
    } // namespace IgnoreGoThroughPlatforms
} // namespace app::classes::types
