#pragma once
#include <Modloader/app/structs/SizedArray.h>
#include <Modloader/app/structs/SizedArray__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SizedArray {
        inline app::SizedArray__Class** type_info() {
            static app::SizedArray__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SizedArray__Class**)(modloader::win::memory::resolve_rva(0x0472E2A8));
            }
            return cache;
        }
        inline app::SizedArray__Class* get_class() {
            return il2cpp::get_class<app::SizedArray__Class>(type_info(), "System.Runtime.Serialization.Formatters.Binary", "SizedArray");
        }
        inline app::SizedArray* create() {
            return il2cpp::create_object<app::SizedArray>(get_class());
        }
    } // namespace SizedArray
} // namespace app::classes::types
