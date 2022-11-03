#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace RuntimeSceneMetaData {
        inline app::RuntimeSceneMetaData__Class** type_info = (app::RuntimeSceneMetaData__Class**)(modloader::win::memory::resolve_rva(0x0478A550));
        inline app::RuntimeSceneMetaData__Class* get_class() {
            return il2cpp::get_class<app::RuntimeSceneMetaData__Class>(type_info, "", "RuntimeSceneMetaData");
        }
        inline app::RuntimeSceneMetaData* create() {
            return il2cpp::create_object<app::RuntimeSceneMetaData>(get_class());
        }
        inline app::RuntimeSceneMetaData__Array* create_array(int size) {
            return il2cpp::array_new<app::RuntimeSceneMetaData__Array>(get_class(), size);
        }
        inline app::RuntimeSceneMetaData__Array* create_array(const std::vector<app::RuntimeSceneMetaData*>& items) {
            return il2cpp::array_new<app::RuntimeSceneMetaData__Array>(get_class(), items);
        }
    } // namespace RuntimeSceneMetaData
} // namespace app::classes::types
