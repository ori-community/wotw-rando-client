#pragma once
#include <Modloader/app/structs/DeflaterManaged.h>
#include <Modloader/app/structs/DeflaterManaged__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DeflaterManaged {
        inline app::DeflaterManaged__Class** type_info() {
            static app::DeflaterManaged__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DeflaterManaged__Class**)(modloader::win::memory::resolve_rva(0x04754060));
            }
            return cache;
        }
        inline app::DeflaterManaged__Class* get_class() {
            return il2cpp::get_class<app::DeflaterManaged__Class>(type_info(), "Unity.IO.Compression", "DeflaterManaged");
        }
        inline app::DeflaterManaged* create() {
            return il2cpp::create_object<app::DeflaterManaged>(get_class());
        }
    } // namespace DeflaterManaged
} // namespace app::classes::types
