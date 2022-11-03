#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace GeneralDebugMenuPage_SceneInfo {
        inline app::GeneralDebugMenuPage_SceneInfo__Class** type_info = (app::GeneralDebugMenuPage_SceneInfo__Class**)(modloader::win::memory::resolve_rva(0x04770650));
        inline app::GeneralDebugMenuPage_SceneInfo__Class* get_class() {
            return il2cpp::get_nested_class<app::GeneralDebugMenuPage_SceneInfo__Class>(type_info, "", "GeneralDebugMenuPage", "SceneInfo");
        }
        inline app::GeneralDebugMenuPage_SceneInfo* create() {
            return il2cpp::create_object<app::GeneralDebugMenuPage_SceneInfo>(get_class());
        }
        inline app::GeneralDebugMenuPage_SceneInfo__Boxed* box(app::GeneralDebugMenuPage_SceneInfo value) {
            return il2cpp::box_value<app::GeneralDebugMenuPage_SceneInfo__Boxed>(get_class(), value);
        }
        inline app::GeneralDebugMenuPage_SceneInfo__Array* create_array(int size) {
            return il2cpp::array_new<app::GeneralDebugMenuPage_SceneInfo__Array>(get_class(), size);
        }
        inline app::GeneralDebugMenuPage_SceneInfo__Array* create_array(const std::vector<app::GeneralDebugMenuPage_SceneInfo>& items) {
            return il2cpp::array_new<app::GeneralDebugMenuPage_SceneInfo__Array>(get_class(), items);
        }
    } // namespace GeneralDebugMenuPage_SceneInfo
} // namespace app::classes::types
