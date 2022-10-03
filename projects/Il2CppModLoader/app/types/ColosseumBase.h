#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ColosseumBase {
        namespace {
            app::ColosseumBase__Class* type_info_ref = nullptr;
        }
        app::ColosseumBase__Class** type_info = &type_info_ref;
        inline app::ColosseumBase__Class* get_class() {
            return il2cpp::get_class<app::ColosseumBase__Class>(type_info, "", "ColosseumBase");
        }
        inline app::ColosseumBase* create() {
            return il2cpp::create_object<app::ColosseumBase>(get_class());
        }
    } // namespace ColosseumBase
} // namespace app::classes::types
