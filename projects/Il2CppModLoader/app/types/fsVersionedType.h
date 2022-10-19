#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace fsVersionedType {
        inline app::fsVersionedType__Class** type_info = (app::fsVersionedType__Class**)(modloader::win::memory::resolve_rva(0x047455D0));
        inline app::fsVersionedType__Class* get_class() {
            return il2cpp::get_class<app::fsVersionedType__Class>(type_info, "FullSerializer.Internal", "fsVersionedType");
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
