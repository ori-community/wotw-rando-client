#pragma once
#include <Modloader/app/structs/SrpSampler__Array.h>
#include <Modloader/app/structs/SrpSampler__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SrpSampler__Array {
        inline app::SrpSampler__Array__Class** type_info() {
            static app::SrpSampler__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SrpSampler__Array__Class**)(modloader::win::memory::resolve_rva(0x04730A78));
            }
            return cache;
        }
        inline app::SrpSampler__Array__Class* get_class() {
            return il2cpp::get_class<app::SrpSampler__Array__Class>(type_info(), "Moon.Rendering", "SrpSampler[]");
        }
        inline app::SrpSampler__Array* create() {
            return il2cpp::create_object<app::SrpSampler__Array>(get_class());
        }
    } // namespace SrpSampler__Array
} // namespace app::classes::types
