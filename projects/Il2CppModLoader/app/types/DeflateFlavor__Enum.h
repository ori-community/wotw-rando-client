#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace DeflateFlavor__Enum {
        namespace {
            inline app::DeflateFlavor__Enum__Class* type_info_ref = nullptr;
        }
        inline app::DeflateFlavor__Enum__Class** type_info = &type_info_ref;
        inline app::DeflateFlavor__Enum__Class* get_class() {
            return il2cpp::get_class<app::DeflateFlavor__Enum__Class>(type_info, "Ionic.Zlib", "DeflateFlavor");
        }
        inline app::DeflateFlavor__Enum* create() {
            return il2cpp::create_object<app::DeflateFlavor__Enum>(get_class());
        }
    } // namespace DeflateFlavor__Enum
} // namespace app::classes::types
