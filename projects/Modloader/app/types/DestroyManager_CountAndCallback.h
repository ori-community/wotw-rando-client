#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/DestroyManager_CountAndCallback__Class.h>
#include <Modloader/app/structs/DestroyManager_CountAndCallback.h>
#include <Modloader/app/structs/DestroyManager_CountAndCallback__Array.h>

namespace app::classes::types {
    namespace DestroyManager_CountAndCallback {
        inline app::DestroyManager_CountAndCallback__Class** type_info = (app::DestroyManager_CountAndCallback__Class**)(modloader::win::memory::resolve_rva(0x047352B0));
        inline app::DestroyManager_CountAndCallback__Class* get_class() {
            return il2cpp::get_nested_class<app::DestroyManager_CountAndCallback__Class>(type_info, "", "DestroyManager", "CountAndCallback");
        }
        inline app::DestroyManager_CountAndCallback* create() {
            return il2cpp::create_object<app::DestroyManager_CountAndCallback>(get_class());
        }
        inline app::DestroyManager_CountAndCallback__Array* create_array(int size) {
            return il2cpp::array_new<app::DestroyManager_CountAndCallback__Array>(get_class(), size);
        }
        inline app::DestroyManager_CountAndCallback__Array* create_array(const std::vector<app::DestroyManager_CountAndCallback*>& items) {
            return il2cpp::array_new<app::DestroyManager_CountAndCallback__Array>(get_class(), items);
        }
    } // namespace DestroyManager_CountAndCallback
} // namespace app::classes::types
