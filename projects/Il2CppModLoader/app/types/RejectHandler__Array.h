#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RejectHandler__Array {
        namespace {
            app::RejectHandler__Array__Class* type_info_ref = nullptr;
        }
        app::RejectHandler__Array__Class** type_info = &type_info_ref;
        inline app::RejectHandler__Array__Class* get_class() {
            return il2cpp::get_class<app::RejectHandler__Array__Class>(type_info, "ZenFulcrum.EmbeddedBrowser", "RejectHandler[]");
        }
        inline app::RejectHandler__Array* create() {
            return il2cpp::create_object<app::RejectHandler__Array>(get_class());
        }
    } // namespace RejectHandler__Array
} // namespace app::classes::types
