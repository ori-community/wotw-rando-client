#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace _ComObject {
        namespace {
            app::_ComObject__Class* type_info_ref = nullptr;
        }
        app::_ComObject__Class** type_info = &type_info_ref;
        inline app::_ComObject__Class* get_class() {
            return il2cpp::get_class<app::_ComObject__Class>(type_info, "System", "__ComObject");
        }
        inline app::_ComObject* create() {
            return il2cpp::create_object<app::_ComObject>(get_class());
        }
    } // namespace _ComObject
} // namespace app::classes::types
