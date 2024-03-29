#pragma once
#include <Modloader/app/structs/fsMetaType.h>
#include <Modloader/app/structs/fsMetaType__Array.h>
#include <Modloader/app/structs/fsMetaType__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace fsMetaType {
        inline app::fsMetaType__Class** type_info() {
            static app::fsMetaType__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::fsMetaType__Class**)(modloader::win::memory::resolve_rva(0x04783DC8));
            }
            return cache;
        }
        inline app::fsMetaType__Class* get_class() {
            return il2cpp::get_class<app::fsMetaType__Class>(type_info(), "FullSerializer", "fsMetaType");
        }
        inline app::fsMetaType* create() {
            return il2cpp::create_object<app::fsMetaType>(get_class());
        }
        inline app::fsMetaType__Array* create_array(int size) {
            return il2cpp::array_new<app::fsMetaType__Array>(get_class(), size);
        }
        inline app::fsMetaType__Array* create_array(const std::vector<app::fsMetaType*>& items) {
            return il2cpp::array_new<app::fsMetaType__Array>(get_class(), items);
        }
    } // namespace fsMetaType
} // namespace app::classes::types
