#pragma once
#include <Modloader/app/structs/UriHelper.h>
#include <Modloader/app/structs/UriHelper__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UriHelper {
        inline app::UriHelper__Class** type_info() {
            static app::UriHelper__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::UriHelper__Class**)(modloader::win::memory::resolve_rva(0x04756FF0));
            }
            return cache;
        }
        inline app::UriHelper__Class* get_class() {
            return il2cpp::get_class<app::UriHelper__Class>(type_info(), "System", "UriHelper");
        }
        inline app::UriHelper* create() {
            return il2cpp::create_object<app::UriHelper>(get_class());
        }
    } // namespace UriHelper
} // namespace app::classes::types
