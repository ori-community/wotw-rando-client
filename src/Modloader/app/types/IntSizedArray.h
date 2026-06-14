#pragma once
#include <Modloader/app/structs/IntSizedArray.h>
#include <Modloader/app/structs/IntSizedArray__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IntSizedArray {
        inline app::IntSizedArray__Class** type_info() {
            static app::IntSizedArray__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IntSizedArray__Class**)(modloader::win::memory::resolve_rva(0x0476EB68));
            }
            return cache;
        }
        inline app::IntSizedArray__Class* get_class() {
            return il2cpp::get_class<app::IntSizedArray__Class>(type_info(), "System.Runtime.Serialization.Formatters.Binary", "IntSizedArray");
        }
        inline app::IntSizedArray* create() {
            return il2cpp::create_object<app::IntSizedArray>(get_class());
        }
    } // namespace IntSizedArray
} // namespace app::classes::types
