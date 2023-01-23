#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/DiscriminatedUnionConverter_c_DisplayClass8_0__Class.h>
#include <Modloader/app/structs/DiscriminatedUnionConverter_c_DisplayClass8_0.h>

namespace app::classes::types {
    namespace DiscriminatedUnionConverter_c_DisplayClass8_0 {
        inline app::DiscriminatedUnionConverter_c_DisplayClass8_0__Class** type_info = (app::DiscriminatedUnionConverter_c_DisplayClass8_0__Class**)(modloader::win::memory::resolve_rva(0x047538B8));
        inline app::DiscriminatedUnionConverter_c_DisplayClass8_0__Class* get_class() {
            return il2cpp::get_nested_class<app::DiscriminatedUnionConverter_c_DisplayClass8_0__Class>(type_info, "Newtonsoft.Json.Converters", "DiscriminatedUnionConverter", "<>c__DisplayClass8_0");
        }
        inline app::DiscriminatedUnionConverter_c_DisplayClass8_0* create() {
            return il2cpp::create_object<app::DiscriminatedUnionConverter_c_DisplayClass8_0>(get_class());
        }
    } // namespace DiscriminatedUnionConverter_c_DisplayClass8_0
} // namespace app::classes::types
