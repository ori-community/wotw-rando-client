#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace fsForwardAttribute {
        namespace {
            app::fsForwardAttribute__Class* type_info_ref = nullptr;
        }
        app::fsForwardAttribute__Class** type_info = &type_info_ref;
        inline app::fsForwardAttribute__Class* get_class() {
            return il2cpp::get_class<app::fsForwardAttribute__Class>(type_info, "FullSerializer", "fsForwardAttribute");
        }
        inline app::fsForwardAttribute* create() {
            return il2cpp::create_object<app::fsForwardAttribute>(get_class());
        }
    } // namespace fsForwardAttribute
} // namespace app::classes::types
