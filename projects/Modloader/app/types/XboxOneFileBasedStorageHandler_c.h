#pragma once
#include <Modloader/app/structs/XboxOneFileBasedStorageHandler_c.h>
#include <Modloader/app/structs/XboxOneFileBasedStorageHandler_c__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XboxOneFileBasedStorageHandler_c {
        inline app::XboxOneFileBasedStorageHandler_c__Class** type_info() {
            static app::XboxOneFileBasedStorageHandler_c__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XboxOneFileBasedStorageHandler_c__Class**)(modloader::win::memory::resolve_rva(0x0478E8D0));
            }
            return cache;
        }
        inline app::XboxOneFileBasedStorageHandler_c__Class* get_class() {
            return il2cpp::get_nested_class<app::XboxOneFileBasedStorageHandler_c__Class>(type_info(), "frameworks.xboxLive", "XboxOneFileBasedStorageHandler", "<>c");
        }
        inline app::XboxOneFileBasedStorageHandler_c* create() {
            return il2cpp::create_object<app::XboxOneFileBasedStorageHandler_c>(get_class());
        }
    } // namespace XboxOneFileBasedStorageHandler_c
} // namespace app::classes::types
