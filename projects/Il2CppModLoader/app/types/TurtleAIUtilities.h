#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace TurtleAIUtilities {
        namespace {
            inline app::TurtleAIUtilities__Class* type_info_ref = nullptr;
        }
        inline app::TurtleAIUtilities__Class** type_info = &type_info_ref;
        inline app::TurtleAIUtilities__Class* get_class() {
            return il2cpp::get_class<app::TurtleAIUtilities__Class>(type_info, "", "TurtleAIUtilities");
        }
        inline app::TurtleAIUtilities* create() {
            return il2cpp::create_object<app::TurtleAIUtilities>(get_class());
        }
    } // namespace TurtleAIUtilities
} // namespace app::classes::types
