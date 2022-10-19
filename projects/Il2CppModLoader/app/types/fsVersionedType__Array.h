#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace fsVersionedType__Array {
        inline app::fsVersionedType__Array__Class** type_info = (app::fsVersionedType__Array__Class**)(modloader::win::memory::resolve_rva(0x047530C8));
        inline app::fsVersionedType__Array__Class* get_class() {
            return il2cpp::get_class<app::fsVersionedType__Array__Class>(type_info, "FullSerializer.Internal", "fsVersionedType[]");
        }
        inline app::fsVersionedType__Array* create() {
            return il2cpp::create_object<app::fsVersionedType__Array>(get_class());
        }
    } // namespace fsVersionedType__Array
} // namespace app::classes::types
