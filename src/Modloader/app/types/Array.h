#pragma once
#include <Modloader/app/structs/Array.h>
#include <Modloader/app/structs/Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Array {
        inline app::Array__Class** type_info() {
            static app::Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Array__Class**)(modloader::win::memory::resolve_rva(0x04780E98));
            }
            return cache;
        }
        inline app::Array__Class* get_class() {
            return il2cpp::get_class<app::Array__Class>(type_info(), "System", "Array");
        }
        inline app::Array* create() {
            return il2cpp::create_object<app::Array>(get_class());
        }
    } // namespace Array
} // namespace app::classes::types
