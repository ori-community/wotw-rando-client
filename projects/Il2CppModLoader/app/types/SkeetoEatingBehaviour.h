#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SkeetoEatingBehaviour {
        namespace {
            app::SkeetoEatingBehaviour__Class* type_info_ref = nullptr;
        }
        app::SkeetoEatingBehaviour__Class** type_info = &type_info_ref;
        inline app::SkeetoEatingBehaviour__Class* get_class() {
            return il2cpp::get_class<app::SkeetoEatingBehaviour__Class>(type_info, "", "SkeetoEatingBehaviour");
        }
        inline app::SkeetoEatingBehaviour* create() {
            return il2cpp::create_object<app::SkeetoEatingBehaviour>(get_class());
        }
    } // namespace SkeetoEatingBehaviour
} // namespace app::classes::types
