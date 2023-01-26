#pragma once
#include <Modloader/app/structs/MonoAsyncCall.h>
#include <Modloader/app/structs/MonoAsyncCall__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MonoAsyncCall {
        inline app::MonoAsyncCall__Class** type_info() {
            static app::MonoAsyncCall__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MonoAsyncCall__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MonoAsyncCall__Class* get_class() {
            return il2cpp::get_class<app::MonoAsyncCall__Class>(type_info(), "System", "MonoAsyncCall");
        }
        inline app::MonoAsyncCall* create() {
            return il2cpp::create_object<app::MonoAsyncCall>(get_class());
        }
    } // namespace MonoAsyncCall
} // namespace app::classes::types
