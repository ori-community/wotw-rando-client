#pragma once
#include <Modloader/app/structs/IAsyncLocal__Array.h>
#include <Modloader/app/structs/IAsyncLocal__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IAsyncLocal__Array {
        inline app::IAsyncLocal__Array__Class** type_info() {
            static app::IAsyncLocal__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::IAsyncLocal__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::IAsyncLocal__Array__Class* get_class() {
            return il2cpp::get_class<app::IAsyncLocal__Array__Class>(type_info(), "System.Threading", "IAsyncLocal[]");
        }
        inline app::IAsyncLocal__Array* create() {
            return il2cpp::create_object<app::IAsyncLocal__Array>(get_class());
        }
    } // namespace IAsyncLocal__Array
} // namespace app::classes::types
