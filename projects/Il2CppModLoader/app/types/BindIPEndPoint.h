#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BindIPEndPoint {
        namespace {
            app::BindIPEndPoint__Class* type_info_ref = nullptr;
        }
        app::BindIPEndPoint__Class** type_info = &type_info_ref;
        inline app::BindIPEndPoint__Class* get_class() {
            return il2cpp::get_class<app::BindIPEndPoint__Class>(type_info, "System.Net", "BindIPEndPoint");
        }
        inline app::BindIPEndPoint* create() {
            return il2cpp::create_object<app::BindIPEndPoint>(get_class());
        }
    } // namespace BindIPEndPoint
} // namespace app::classes::types
