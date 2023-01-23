#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ColorVariation_c__Class.h>
#include <Modloader/app/structs/ColorVariation_c.h>

namespace app::classes::types {
    namespace ColorVariation_c {
        inline app::ColorVariation_c__Class** type_info = (app::ColorVariation_c__Class**)(modloader::win::memory::resolve_rva(0x0475AA68));
        inline app::ColorVariation_c__Class* get_class() {
            return il2cpp::get_nested_class<app::ColorVariation_c__Class>(type_info, "", "ColorVariation", "<>c");
        }
        inline app::ColorVariation_c* create() {
            return il2cpp::create_object<app::ColorVariation_c>(get_class());
        }
    } // namespace ColorVariation_c
} // namespace app::classes::types
