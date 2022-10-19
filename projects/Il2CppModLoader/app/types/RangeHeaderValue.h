#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace RangeHeaderValue {
        inline app::RangeHeaderValue__Class** type_info = (app::RangeHeaderValue__Class**)(modloader::win::memory::resolve_rva(0x04730EB0));
        inline app::RangeHeaderValue__Class* get_class() {
            return il2cpp::get_class<app::RangeHeaderValue__Class>(type_info, "System.Net.Http.Headers", "RangeHeaderValue");
        }
        inline app::RangeHeaderValue* create() {
            return il2cpp::create_object<app::RangeHeaderValue>(get_class());
        }
    } // namespace RangeHeaderValue
} // namespace app::classes::types
