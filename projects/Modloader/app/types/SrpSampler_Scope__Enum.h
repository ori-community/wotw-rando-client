#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SrpSampler_Scope__Enum {
        inline app::SrpSampler_Scope__Enum__Class** type_info = (app::SrpSampler_Scope__Enum__Class**)(modloader::win::memory::resolve_rva(0x04767688));
        inline app::SrpSampler_Scope__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::SrpSampler_Scope__Enum__Class>(type_info, "Moon.Rendering", "SrpSampler", "Scope");
        }
        inline app::SrpSampler_Scope__Enum* create() {
            return il2cpp::create_object<app::SrpSampler_Scope__Enum>(get_class());
        }
    } // namespace SrpSampler_Scope__Enum
} // namespace app::classes::types
