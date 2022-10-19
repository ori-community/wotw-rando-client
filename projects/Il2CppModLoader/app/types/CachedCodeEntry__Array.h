#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CachedCodeEntry__Array {
        namespace {
            inline app::CachedCodeEntry__Array__Class* type_info_ref = nullptr;
        }
        inline app::CachedCodeEntry__Array__Class** type_info = &type_info_ref;
        inline app::CachedCodeEntry__Array__Class* get_class() {
            return il2cpp::get_class<app::CachedCodeEntry__Array__Class>(type_info, "System.Text.RegularExpressions", "CachedCodeEntry[]");
        }
        inline app::CachedCodeEntry__Array* create() {
            return il2cpp::create_object<app::CachedCodeEntry__Array>(get_class());
        }
    } // namespace CachedCodeEntry__Array
} // namespace app::classes::types
