#pragma once
#include <Modloader/app/structs/fsVersionedType.h>
#include <Modloader/app/structs/fsVersionedType__Array.h>
#include <Modloader/app/structs/fsVersionedType__Boxed.h>
#include <Modloader/app/structs/fsVersionedType__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace fsVersionedType {
        inline app::fsVersionedType__Class** type_info() {
            static app::fsVersionedType__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::fsVersionedType__Class**)(modloader::win::memory::resolve_rva(0x047455D0));
            }
            return cache;
        }
        inline app::fsVersionedType__Class* get_class() {
            return il2cpp::get_class<app::fsVersionedType__Class>(type_info(), "FullSerializer.Internal", "fsVersionedType");
        }
        inline app::fsVersionedType* create() {
            return il2cpp::create_object<app::fsVersionedType>(get_class());
        }
        inline app::fsVersionedType__Boxed* box(app::fsVersionedType value) {
            return il2cpp::box_value<app::fsVersionedType__Boxed>(get_class(), value);
        }
        inline app::fsVersionedType__Array* create_array(int size) {
            return il2cpp::array_new<app::fsVersionedType__Array>(get_class(), size);
        }
        inline app::fsVersionedType__Array* create_array(const std::vector<app::fsVersionedType>& items) {
            return il2cpp::array_new<app::fsVersionedType__Array>(get_class(), items);
        }
    } // namespace fsVersionedType
} // namespace app::classes::types
