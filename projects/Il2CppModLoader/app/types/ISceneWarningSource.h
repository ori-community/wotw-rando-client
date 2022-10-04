#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ISceneWarningSource {
        namespace {
            app::ISceneWarningSource__Class* type_info_ref = nullptr;
        }
        app::ISceneWarningSource__Class** type_info = &type_info_ref;
        inline app::ISceneWarningSource__Class* get_class() {
            return il2cpp::get_class<app::ISceneWarningSource__Class>(type_info, "", "ISceneWarningSource");
        }
        inline app::ISceneWarningSource* create() {
            return il2cpp::create_object<app::ISceneWarningSource>(get_class());
        }
        inline app::ISceneWarningSource__Array* create_array(int size) {
            return il2cpp::array_new<app::ISceneWarningSource__Array>(get_class(), size);
        }
    } // namespace ISceneWarningSource
} // namespace app::classes::types
