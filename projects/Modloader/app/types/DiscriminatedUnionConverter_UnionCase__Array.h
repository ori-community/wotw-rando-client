#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/DiscriminatedUnionConverter_UnionCase__Array__Class.h>
#include <Modloader/app/structs/DiscriminatedUnionConverter_UnionCase__Array.h>

namespace app::classes::types {
    namespace DiscriminatedUnionConverter_UnionCase__Array {
        namespace {
            inline app::DiscriminatedUnionConverter_UnionCase__Array__Class* type_info_ref = nullptr;
        }
        inline app::DiscriminatedUnionConverter_UnionCase__Array__Class** type_info = &type_info_ref;
        inline app::DiscriminatedUnionConverter_UnionCase__Array__Class* get_class() {
            return il2cpp::get_class<app::DiscriminatedUnionConverter_UnionCase__Array__Class>(type_info, "Newtonsoft.Json.Converters", "DiscriminatedUnionConverter+UnionCase[]");
        }
        inline app::DiscriminatedUnionConverter_UnionCase__Array* create() {
            return il2cpp::create_object<app::DiscriminatedUnionConverter_UnionCase__Array>(get_class());
        }
    } // namespace DiscriminatedUnionConverter_UnionCase__Array
} // namespace app::classes::types
