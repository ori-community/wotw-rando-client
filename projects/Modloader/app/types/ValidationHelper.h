#pragma once
#include <Modloader/app/structs/ValidationHelper.h>
#include <Modloader/app/structs/ValidationHelper__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ValidationHelper {
        inline app::ValidationHelper__Class** type_info() {
            static app::ValidationHelper__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ValidationHelper__Class**)(modloader::win::memory::resolve_rva(0x0472CE08));
            }
            return cache;
        }
        inline app::ValidationHelper__Class* get_class() {
            return il2cpp::get_class<app::ValidationHelper__Class>(type_info(), "System.Net", "ValidationHelper");
        }
        inline app::ValidationHelper* create() {
            return il2cpp::create_object<app::ValidationHelper>(get_class());
        }
    } // namespace ValidationHelper
} // namespace app::classes::types
