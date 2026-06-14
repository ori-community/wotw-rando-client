#pragma once
#include <Modloader/app/structs/AsyncHelper.h>
#include <Modloader/app/structs/AsyncHelper__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AsyncHelper {
        inline app::AsyncHelper__Class** type_info() {
            static app::AsyncHelper__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::AsyncHelper__Class**)(modloader::win::memory::resolve_rva(0x047164B8));
            }
            return cache;
        }
        inline app::AsyncHelper__Class* get_class() {
            return il2cpp::get_class<app::AsyncHelper__Class>(type_info(), "System.Xml", "AsyncHelper");
        }
        inline app::AsyncHelper* create() {
            return il2cpp::create_object<app::AsyncHelper>(get_class());
        }
    } // namespace AsyncHelper
} // namespace app::classes::types
