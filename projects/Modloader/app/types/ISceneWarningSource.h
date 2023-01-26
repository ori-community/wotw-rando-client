#pragma once
#include <Modloader/app/structs/ISceneWarningSource.h>
#include <Modloader/app/structs/ISceneWarningSource__Array.h>
#include <Modloader/app/structs/ISceneWarningSource__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ISceneWarningSource {
        inline app::ISceneWarningSource__Class** type_info() {
            static app::ISceneWarningSource__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ISceneWarningSource__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ISceneWarningSource__Class* get_class() {
            return il2cpp::get_class<app::ISceneWarningSource__Class>(type_info(), "", "ISceneWarningSource");
        }
        inline app::ISceneWarningSource__Array* create_array(int size) {
            return il2cpp::array_new<app::ISceneWarningSource__Array>(get_class(), size);
        }
        inline app::ISceneWarningSource__Array* create_array(const std::vector<app::ISceneWarningSource*>& items) {
            return il2cpp::array_new<app::ISceneWarningSource__Array>(get_class(), items);
        }
    } // namespace ISceneWarningSource
} // namespace app::classes::types
