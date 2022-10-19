#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace WwiseObjectType__Enum {
        inline app::WwiseObjectType__Enum__Class** type_info = (app::WwiseObjectType__Enum__Class**)(modloader::win::memory::resolve_rva(0x04739B80));
        inline app::WwiseObjectType__Enum__Class* get_class() {
            return il2cpp::get_class<app::WwiseObjectType__Enum__Class>(type_info, "", "WwiseObjectType");
        }
        inline app::WwiseObjectType__Enum* create() {
            return il2cpp::create_object<app::WwiseObjectType__Enum>(get_class());
        }
    } // namespace WwiseObjectType__Enum
} // namespace app::classes::types
