#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/DiscriminatedUnionConverter_UnionCase__Class.h>
#include <Modloader/app/structs/DiscriminatedUnionConverter_UnionCase.h>
#include <Modloader/app/structs/DiscriminatedUnionConverter_UnionCase__Array.h>

namespace app::classes::types {
    namespace DiscriminatedUnionConverter_UnionCase {
        inline app::DiscriminatedUnionConverter_UnionCase__Class** type_info = (app::DiscriminatedUnionConverter_UnionCase__Class**)(modloader::win::memory::resolve_rva(0x0477F1C8));
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
