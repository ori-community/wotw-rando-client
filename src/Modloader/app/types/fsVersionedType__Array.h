#pragma once
#include <Modloader/app/structs/fsVersionedType__Array.h>
#include <Modloader/app/structs/fsVersionedType__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace fsVersionedType__Array {
        inline app::fsVersionedType__Array__Class** type_info() {
            static app::fsVersionedType__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::fsVersionedType__Array__Class**)(modloader::win::memory::resolve_rva(0x047530C8));
            }
            return cache;
        }
        inline app::fsVersionedType__Array__Class* get_class() {
            return il2cpp::get_class<app::fsVersionedType__Array__Class>(type_info(), "FullSerializer.Internal", "fsVersionedType[]");
        }
        inline app::fsVersionedType__Array* create() {
            return il2cpp::create_object<app::fsVersionedType__Array>(get_class());
        }
    } // namespace fsVersionedType__Array
} // namespace app::classes::types
