#pragma once
#include <Modloader/app/structs/EmptyStruct.h>
#include <Modloader/app/structs/EmptyStruct__Boxed.h>
#include <Modloader/app/structs/EmptyStruct__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EmptyStruct {
        inline app::EmptyStruct__Class** type_info() {
            static app::EmptyStruct__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::EmptyStruct__Class**)(modloader::win::memory::resolve_rva(0x04711A20));
            }
            return cache;
        }
        inline app::EmptyStruct__Class* get_class() {
            return il2cpp::get_class<app::EmptyStruct__Class>(type_info(), "System.Diagnostics.Tracing", "EmptyStruct");
        }
        inline app::EmptyStruct* create() {
            return il2cpp::create_object<app::EmptyStruct>(get_class());
        }
        inline app::EmptyStruct__Boxed* box(app::EmptyStruct value) {
            return il2cpp::box_value<app::EmptyStruct__Boxed>(get_class(), value);
        }
    } // namespace EmptyStruct
} // namespace app::classes::types
