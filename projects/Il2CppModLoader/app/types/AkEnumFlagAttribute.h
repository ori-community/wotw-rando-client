#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AkEnumFlagAttribute {
        namespace {
            app::AkEnumFlagAttribute__Class* type_info_ref = nullptr;
        }
        app::AkEnumFlagAttribute__Class** type_info = &type_info_ref;
        inline app::AkEnumFlagAttribute__Class* get_class() {
            return il2cpp::get_class<app::AkEnumFlagAttribute__Class>(type_info, "", "AkEnumFlagAttribute");
        }
        inline app::AkEnumFlagAttribute* create() {
            return il2cpp::create_object<app::AkEnumFlagAttribute>(get_class());
        }
    } // namespace AkEnumFlagAttribute
} // namespace app::classes::types
