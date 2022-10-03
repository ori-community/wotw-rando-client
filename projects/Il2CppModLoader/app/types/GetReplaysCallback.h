#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GetReplaysCallback {
        namespace {
            app::GetReplaysCallback__Class* type_info_ref = nullptr;
        }
        app::GetReplaysCallback__Class** type_info = &type_info_ref;
        inline app::GetReplaysCallback__Class* get_class() {
            return il2cpp::get_class<app::GetReplaysCallback__Class>(type_info, "", "GetReplaysCallback");
        }
        inline app::GetReplaysCallback* create() {
            return il2cpp::create_object<app::GetReplaysCallback>(get_class());
        }
    } // namespace GetReplaysCallback
} // namespace app::classes::types
