#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace DiscriminatedUnionConverter_c_DisplayClass9_0 {
        inline app::DiscriminatedUnionConverter_c_DisplayClass9_0__Class** type_info = (app::DiscriminatedUnionConverter_c_DisplayClass9_0__Class**)(modloader::win::memory::resolve_rva(0x04747DF0));
        inline app::DiscriminatedUnionConverter_c_DisplayClass9_0__Class* get_class() {
            return il2cpp::get_nested_class<app::DiscriminatedUnionConverter_c_DisplayClass9_0__Class>(type_info, "Newtonsoft.Json.Converters", "DiscriminatedUnionConverter", "<>c__DisplayClass9_0");
        }
        inline app::DiscriminatedUnionConverter_c_DisplayClass9_0* create() {
            return il2cpp::create_object<app::DiscriminatedUnionConverter_c_DisplayClass9_0>(get_class());
        }
    } // namespace DiscriminatedUnionConverter_c_DisplayClass9_0
} // namespace app::classes::types
