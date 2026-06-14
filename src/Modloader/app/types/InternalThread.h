#pragma once
#include <Modloader/app/structs/InternalThread.h>
#include <Modloader/app/structs/InternalThread__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace InternalThread {
        inline app::InternalThread__Class** type_info() {
            static app::InternalThread__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::InternalThread__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::InternalThread__Class* get_class() {
            return il2cpp::get_class<app::InternalThread__Class>(type_info(), "System.Threading", "InternalThread");
        }
        inline app::InternalThread* create() {
            return il2cpp::create_object<app::InternalThread>(get_class());
        }
    } // namespace InternalThread
} // namespace app::classes::types
