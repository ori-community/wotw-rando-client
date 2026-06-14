#pragma once
#include <Modloader/app/structs/PrimitiveArray.h>
#include <Modloader/app/structs/PrimitiveArray__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PrimitiveArray {
        inline app::PrimitiveArray__Class** type_info() {
            static app::PrimitiveArray__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PrimitiveArray__Class**)(modloader::win::memory::resolve_rva(0x047099F8));
            }
            return cache;
        }
        inline app::PrimitiveArray__Class* get_class() {
            return il2cpp::get_class<app::PrimitiveArray__Class>(type_info(), "System.Runtime.Serialization.Formatters.Binary", "PrimitiveArray");
        }
        inline app::PrimitiveArray* create() {
            return il2cpp::create_object<app::PrimitiveArray>(get_class());
        }
    } // namespace PrimitiveArray
} // namespace app::classes::types
