#pragma once
#include <Modloader/app/structs/SrpSampler_Scope__Enum.h>
#include <Modloader/app/structs/SrpSampler_Scope__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SrpSampler_Scope__Enum {
        inline app::SrpSampler_Scope__Enum__Class** type_info() {
            static app::SrpSampler_Scope__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SrpSampler_Scope__Enum__Class**)(modloader::win::memory::resolve_rva(0x04767688));
            }
            return cache;
        }
        inline app::SrpSampler_Scope__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::SrpSampler_Scope__Enum__Class>(type_info(), "Moon.Rendering", "SrpSampler", "Scope");
        }
        inline app::SrpSampler_Scope__Enum* create() {
            return il2cpp::create_object<app::SrpSampler_Scope__Enum>(get_class());
        }
    } // namespace SrpSampler_Scope__Enum
} // namespace app::classes::types
