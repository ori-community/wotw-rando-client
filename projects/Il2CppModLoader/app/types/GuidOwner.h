#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace GuidOwner {
        inline app::GuidOwner__Class** type_info = (app::GuidOwner__Class**)(modloader::win::memory::resolve_rva(0x04790E00));
        inline app::GuidOwner__Class* get_class() {
            return il2cpp::get_class<app::GuidOwner__Class>(type_info, "", "GuidOwner");
        }
        inline app::GuidOwner* create() {
            return il2cpp::create_object<app::GuidOwner>(get_class());
        }
    } // namespace GuidOwner
} // namespace app::classes::types
