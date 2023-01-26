#pragma once
#include <Modloader/app/structs/AsyncTaskMethodBuilder.h>
#include <Modloader/app/structs/AsyncTaskMethodBuilder__Boxed.h>
#include <Modloader/app/structs/AsyncTaskMethodBuilder__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AsyncTaskMethodBuilder {
        inline app::AsyncTaskMethodBuilder__Class** type_info() {
            static app::AsyncTaskMethodBuilder__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::AsyncTaskMethodBuilder__Class**)(modloader::win::memory::resolve_rva(0x04719530));
            }
            return cache;
        }
        inline app::AsyncTaskMethodBuilder__Class* get_class() {
            return il2cpp::get_class<app::AsyncTaskMethodBuilder__Class>(type_info(), "System.Runtime.CompilerServices", "AsyncTaskMethodBuilder");
        }
        inline app::AsyncTaskMethodBuilder* create() {
            return il2cpp::create_object<app::AsyncTaskMethodBuilder>(get_class());
        }
        inline app::AsyncTaskMethodBuilder__Boxed* box(app::AsyncTaskMethodBuilder value) {
            return il2cpp::box_value<app::AsyncTaskMethodBuilder__Boxed>(get_class(), value);
        }
    } // namespace AsyncTaskMethodBuilder
} // namespace app::classes::types
