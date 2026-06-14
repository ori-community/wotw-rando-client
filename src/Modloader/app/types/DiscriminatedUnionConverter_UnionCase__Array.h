#pragma once
#include <Modloader/app/structs/DiscriminatedUnionConverter_UnionCase__Array.h>
#include <Modloader/app/structs/DiscriminatedUnionConverter_UnionCase__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DiscriminatedUnionConverter_UnionCase__Array {
        inline app::DiscriminatedUnionConverter_UnionCase__Array__Class** type_info() {
            static app::DiscriminatedUnionConverter_UnionCase__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DiscriminatedUnionConverter_UnionCase__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DiscriminatedUnionConverter_UnionCase__Array__Class* get_class() {
            return il2cpp::get_class<app::DiscriminatedUnionConverter_UnionCase__Array__Class>(type_info(), "Newtonsoft.Json.Converters", "DiscriminatedUnionConverter+UnionCase[]");
        }
        inline app::DiscriminatedUnionConverter_UnionCase__Array* create() {
            return il2cpp::create_object<app::DiscriminatedUnionConverter_UnionCase__Array>(get_class());
        }
    } // namespace DiscriminatedUnionConverter_UnionCase__Array
} // namespace app::classes::types
