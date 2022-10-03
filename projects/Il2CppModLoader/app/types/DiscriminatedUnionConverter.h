#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DiscriminatedUnionConverter {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DiscriminatedUnionConverter__Class** type_info;
        inline app::DiscriminatedUnionConverter__Class* get_class() {
            return il2cpp::get_class<app::DiscriminatedUnionConverter__Class>(type_info, "Newtonsoft.Json.Converters", "DiscriminatedUnionConverter");
        }
        inline app::DiscriminatedUnionConverter* create() {
            return il2cpp::create_object<app::DiscriminatedUnionConverter>(get_class());
        }
    } // namespace DiscriminatedUnionConverter
} // namespace app::classes::types
