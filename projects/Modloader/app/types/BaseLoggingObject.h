#pragma once
#include <Modloader/app/structs/BaseLoggingObject.h>
#include <Modloader/app/structs/BaseLoggingObject__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BaseLoggingObject {
        inline app::BaseLoggingObject__Class** type_info() {
            static app::BaseLoggingObject__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::BaseLoggingObject__Class**)(modloader::win::memory::resolve_rva(0x0477E5C0));
            }
            return cache;
        }
        inline app::BaseLoggingObject__Class* get_class() {
            return il2cpp::get_class<app::BaseLoggingObject__Class>(type_info(), "System.Net", "BaseLoggingObject");
        }
        inline app::BaseLoggingObject* create() {
            return il2cpp::create_object<app::BaseLoggingObject>(get_class());
        }
    } // namespace BaseLoggingObject
} // namespace app::classes::types
