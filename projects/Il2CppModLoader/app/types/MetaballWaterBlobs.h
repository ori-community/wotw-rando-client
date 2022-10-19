#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace MetaballWaterBlobs {
        namespace {
            inline app::MetaballWaterBlobs__Class* type_info_ref = nullptr;
        }
        inline app::MetaballWaterBlobs__Class** type_info = &type_info_ref;
        inline app::MetaballWaterBlobs__Class* get_class() {
            return il2cpp::get_class<app::MetaballWaterBlobs__Class>(type_info, "", "MetaballWaterBlobs");
        }
        inline app::MetaballWaterBlobs* create() {
            return il2cpp::create_object<app::MetaballWaterBlobs>(get_class());
        }
    } // namespace MetaballWaterBlobs
} // namespace app::classes::types
