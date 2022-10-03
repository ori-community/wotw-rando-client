#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ISceneWarningSource__Array {
        namespace {
            app::ISceneWarningSource__Array__Class* type_info_ref = nullptr;
        }
        app::ISceneWarningSource__Array__Class** type_info = &type_info_ref;
        inline app::ISceneWarningSource__Array__Class* get_class() {
            return il2cpp::get_class<app::ISceneWarningSource__Array__Class>(type_info, "", "ISceneWarningSource[]");
        }
        inline app::ISceneWarningSource__Array* create() {
            return il2cpp::create_object<app::ISceneWarningSource__Array>(get_class());
        }
    } // namespace ISceneWarningSource__Array
} // namespace app::classes::types
