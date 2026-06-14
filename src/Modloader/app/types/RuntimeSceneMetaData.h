#pragma once
#include <Modloader/app/structs/RuntimeSceneMetaData.h>
#include <Modloader/app/structs/RuntimeSceneMetaData__Array.h>
#include <Modloader/app/structs/RuntimeSceneMetaData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RuntimeSceneMetaData {
        inline app::RuntimeSceneMetaData__Class** type_info() {
            static app::RuntimeSceneMetaData__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::RuntimeSceneMetaData__Class**)(modloader::win::memory::resolve_rva(0x0478A550));
            }
            return cache;
        }
        inline app::RuntimeSceneMetaData__Class* get_class() {
            return il2cpp::get_class<app::RuntimeSceneMetaData__Class>(type_info(), "", "RuntimeSceneMetaData");
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
