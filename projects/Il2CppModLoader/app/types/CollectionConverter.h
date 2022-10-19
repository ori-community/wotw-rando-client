#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CollectionConverter {
        namespace {
            inline app::CollectionConverter__Class* type_info_ref = nullptr;
        }
        inline app::CollectionConverter__Class** type_info = &type_info_ref;
        inline app::CollectionConverter__Class* get_class() {
            return il2cpp::get_class<app::CollectionConverter__Class>(type_info, "System.ComponentModel", "CollectionConverter");
        }
        inline app::CollectionConverter* create() {
            return il2cpp::create_object<app::CollectionConverter>(get_class());
        }
    } // namespace CollectionConverter
} // namespace app::classes::types
