#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SimpleTask {
        namespace {
            app::SimpleTask__Class* type_info_ref = nullptr;
        }
        app::SimpleTask__Class** type_info = &type_info_ref;
        inline app::SimpleTask__Class* get_class() {
            return il2cpp::get_class<app::SimpleTask__Class>(type_info, "Moon.ArtOptimization", "SimpleTask");
        }
        inline app::SimpleTask* create() {
            return il2cpp::create_object<app::SimpleTask>(get_class());
        }
    } // namespace SimpleTask
} // namespace app::classes::types
