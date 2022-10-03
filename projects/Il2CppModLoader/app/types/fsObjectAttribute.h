#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace fsObjectAttribute {
        namespace {
            app::fsObjectAttribute__Class* type_info_ref = nullptr;
        }
        app::fsObjectAttribute__Class** type_info = &type_info_ref;
        inline app::fsObjectAttribute__Class* get_class() {
            return il2cpp::get_class<app::fsObjectAttribute__Class>(type_info, "FullSerializer", "fsObjectAttribute");
        }
        inline app::fsObjectAttribute* create() {
            return il2cpp::create_object<app::fsObjectAttribute>(get_class());
        }
    } // namespace fsObjectAttribute
} // namespace app::classes::types
