#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace FreezeObject {
        namespace {
            app::FreezeObject__Class* type_info_ref = nullptr;
        }
        app::FreezeObject__Class** type_info = &type_info_ref;
        inline app::FreezeObject__Class* get_class() {
            return il2cpp::get_class<app::FreezeObject__Class>(type_info, "", "FreezeObject");
        }
        inline app::FreezeObject* create() {
            return il2cpp::create_object<app::FreezeObject>(get_class());
        }
    } // namespace FreezeObject
} // namespace app::classes::types
