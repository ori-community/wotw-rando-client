#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace InternalThread {
        namespace {
            app::InternalThread__Class* type_info_ref = nullptr;
        }
        app::InternalThread__Class** type_info = &type_info_ref;
        inline app::InternalThread__Class* get_class() {
            return il2cpp::get_class<app::InternalThread__Class>(type_info, "System.Threading", "InternalThread");
        }
        inline app::InternalThread* create() {
            return il2cpp::create_object<app::InternalThread>(get_class());
        }
    } // namespace InternalThread
} // namespace app::classes::types
