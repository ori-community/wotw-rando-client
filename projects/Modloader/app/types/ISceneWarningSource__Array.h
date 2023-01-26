#pragma once
#include <Modloader/app/structs/ISceneWarningSource__Array.h>
#include <Modloader/app/structs/ISceneWarningSource__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ISceneWarningSource__Array {
        inline app::ISceneWarningSource__Array__Class** type_info() {
            static app::ISceneWarningSource__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ISceneWarningSource__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ISceneWarningSource__Array__Class* get_class() {
            return il2cpp::get_class<app::ISceneWarningSource__Array__Class>(type_info(), "", "ISceneWarningSource[]");
        }
        inline app::ISceneWarningSource__Array* create() {
            return il2cpp::create_object<app::ISceneWarningSource__Array>(get_class());
        }
    } // namespace ISceneWarningSource__Array
} // namespace app::classes::types
