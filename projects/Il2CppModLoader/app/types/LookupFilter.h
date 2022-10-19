#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace LookupFilter {
        namespace {
            inline app::LookupFilter__Class* type_info_ref = nullptr;
        }
        inline app::LookupFilter__Class** type_info = &type_info_ref;
        inline app::LookupFilter__Class* get_class() {
            return il2cpp::get_class<app::LookupFilter__Class>(type_info, "Colorful", "LookupFilter");
        }
        inline app::LookupFilter* create() {
            return il2cpp::create_object<app::LookupFilter>(get_class());
        }
    } // namespace LookupFilter
} // namespace app::classes::types
