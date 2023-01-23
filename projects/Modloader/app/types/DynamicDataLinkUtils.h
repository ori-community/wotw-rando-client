#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/DynamicDataLinkUtils__Class.h>
#include <Modloader/app/structs/DynamicDataLinkUtils.h>

namespace app::classes::types {
    namespace DynamicDataLinkUtils {
        inline app::DynamicDataLinkUtils__Class** type_info = (app::DynamicDataLinkUtils__Class**)(modloader::win::memory::resolve_rva(0x047524D8));
        inline app::DynamicDataLinkUtils__Class* get_class() {
            return il2cpp::get_class<app::DynamicDataLinkUtils__Class>(type_info, "Moon", "DynamicDataLinkUtils");
        }
        inline app::DynamicDataLinkUtils* create() {
            return il2cpp::create_object<app::DynamicDataLinkUtils>(get_class());
        }
    } // namespace DynamicDataLinkUtils
} // namespace app::classes::types
