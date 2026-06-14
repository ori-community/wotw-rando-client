#pragma once
#include <Modloader/app/structs/String__Array_1.h>
#include <Modloader/app/structs/String__Array_1__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace String__Array_1 {
        inline app::String__Array_1__Class** type_info() {
            static app::String__Array_1__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::String__Array_1__Class**)(modloader::win::memory::resolve_rva(0x04761F98));
            }
            return cache;
        }
        inline app::String__Array_1__Class* get_class() {
            return il2cpp::get_class<app::String__Array_1__Class>(type_info(), "System", "String[,]");
        }
        inline app::String__Array_1* create() {
            return il2cpp::create_object<app::String__Array_1>(get_class());
        }
    } // namespace String__Array_1
} // namespace app::classes::types
