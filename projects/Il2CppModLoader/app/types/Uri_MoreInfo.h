#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace Uri_MoreInfo {
        inline app::Uri_MoreInfo__Class** type_info = (app::Uri_MoreInfo__Class**)(modloader::win::memory::resolve_rva(0x0476D668));
        inline app::Uri_MoreInfo__Class* get_class() {
            return il2cpp::get_nested_class<app::Uri_MoreInfo__Class>(type_info, "System", "Uri", "MoreInfo");
        }
        inline app::Uri_MoreInfo* create() {
            return il2cpp::create_object<app::Uri_MoreInfo>(get_class());
        }
    } // namespace Uri_MoreInfo
} // namespace app::classes::types
