#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RunActionAndWait {
        namespace {
            app::RunActionAndWait__Class* type_info_ref = nullptr;
        }
        app::RunActionAndWait__Class** type_info = &type_info_ref;
        inline app::RunActionAndWait__Class* get_class() {
            return il2cpp::get_class<app::RunActionAndWait__Class>(type_info, "", "RunActionAndWait");
        }
        inline app::RunActionAndWait* create() {
            return il2cpp::create_object<app::RunActionAndWait>(get_class());
        }
    } // namespace RunActionAndWait
} // namespace app::classes::types
