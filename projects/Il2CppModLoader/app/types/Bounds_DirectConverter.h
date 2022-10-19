#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace Bounds_DirectConverter {
        namespace {
            inline app::Bounds_DirectConverter__Class* type_info_ref = nullptr;
        }
        inline app::Bounds_DirectConverter__Class** type_info = &type_info_ref;
        inline app::Bounds_DirectConverter__Class* get_class() {
            return il2cpp::get_class<app::Bounds_DirectConverter__Class>(type_info, "FullSerializer.Internal.DirectConverters", "Bounds_DirectConverter");
        }
        inline app::Bounds_DirectConverter* create() {
            return il2cpp::create_object<app::Bounds_DirectConverter>(get_class());
        }
    } // namespace Bounds_DirectConverter
} // namespace app::classes::types
