#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DiscriminatedUnionConverter_UnionCase {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DiscriminatedUnionConverter_UnionCase__Class** type_info;
        inline app::DiscriminatedUnionConverter_UnionCase__Class* get_class() {
            return il2cpp::get_nested_class<app::DiscriminatedUnionConverter_UnionCase__Class>(type_info, "Newtonsoft.Json.Converters", "DiscriminatedUnionConverter", "UnionCase");
        }
        inline app::DiscriminatedUnionConverter_UnionCase* create() {
            return il2cpp::create_object<app::DiscriminatedUnionConverter_UnionCase>(get_class());
        }
        inline app::DiscriminatedUnionConverter_UnionCase__Array* create_array(int size) {
            return il2cpp::array_new<app::DiscriminatedUnionConverter_UnionCase__Array>(get_class(), size);
        }
        inline app::DiscriminatedUnionConverter_UnionCase__Array* create_array(const std::vector<app::DiscriminatedUnionConverter_UnionCase*>& items) {
            return il2cpp::array_new<app::DiscriminatedUnionConverter_UnionCase__Array>(get_class(), items);
        }
    } // namespace DiscriminatedUnionConverter_UnionCase
} // namespace app::classes::types
