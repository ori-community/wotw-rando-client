#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace NonSerializedAttribute {
        inline app::NonSerializedAttribute__Class** type_info = (app::NonSerializedAttribute__Class**)(modloader::win::memory::resolve_rva(0x0472CDF8));
        inline app::NonSerializedAttribute__Class* get_class() {
            return il2cpp::get_class<app::NonSerializedAttribute__Class>(type_info, "System", "NonSerializedAttribute");
        }
        inline app::NonSerializedAttribute* create() {
            return il2cpp::create_object<app::NonSerializedAttribute>(get_class());
        }
    } // namespace NonSerializedAttribute
} // namespace app::classes::types
