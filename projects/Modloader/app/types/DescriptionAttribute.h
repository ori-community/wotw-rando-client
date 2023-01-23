#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/DescriptionAttribute__Class.h>
#include <Modloader/app/structs/DescriptionAttribute.h>

namespace app::classes::types {
    namespace DescriptionAttribute {
        inline app::DescriptionAttribute__Class** type_info = (app::DescriptionAttribute__Class**)(modloader::win::memory::resolve_rva(0x04785A30));
        inline app::DescriptionAttribute__Class* get_class() {
            return il2cpp::get_class<app::DescriptionAttribute__Class>(type_info, "System.ComponentModel", "DescriptionAttribute");
        }
        inline app::DescriptionAttribute* create() {
            return il2cpp::create_object<app::DescriptionAttribute>(get_class());
        }
    } // namespace DescriptionAttribute
} // namespace app::classes::types
