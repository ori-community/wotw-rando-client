#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ActiveQuestDistanceFloatProvider {
        namespace {
            app::ActiveQuestDistanceFloatProvider__Class* type_info_ref = nullptr;
        }
        app::ActiveQuestDistanceFloatProvider__Class** type_info = &type_info_ref;
        inline app::ActiveQuestDistanceFloatProvider__Class* get_class() {
            return il2cpp::get_class<app::ActiveQuestDistanceFloatProvider__Class>(type_info, "", "ActiveQuestDistanceFloatProvider");
        }
        inline app::ActiveQuestDistanceFloatProvider* create() {
            return il2cpp::create_object<app::ActiveQuestDistanceFloatProvider>(get_class());
        }
    } // namespace ActiveQuestDistanceFloatProvider
} // namespace app::classes::types
