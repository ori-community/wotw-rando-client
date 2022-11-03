#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ActiveQuestDistanceFloatProvider {
        namespace {
            inline app::ActiveQuestDistanceFloatProvider__Class* type_info_ref = nullptr;
        }
        inline app::ActiveQuestDistanceFloatProvider__Class** type_info = &type_info_ref;
        inline app::ActiveQuestDistanceFloatProvider__Class* get_class() {
            return il2cpp::get_class<app::ActiveQuestDistanceFloatProvider__Class>(type_info, "", "ActiveQuestDistanceFloatProvider");
        }
        inline app::ActiveQuestDistanceFloatProvider* create() {
            return il2cpp::create_object<app::ActiveQuestDistanceFloatProvider>(get_class());
        }
    } // namespace ActiveQuestDistanceFloatProvider
} // namespace app::classes::types
