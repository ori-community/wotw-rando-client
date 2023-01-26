#pragma once
#include <Modloader/app/structs/SrpSampler.h>
#include <Modloader/app/structs/SrpSampler__Array.h>
#include <Modloader/app/structs/SrpSampler__Boxed.h>
#include <Modloader/app/structs/SrpSampler__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SrpSampler {
        inline app::SrpSampler__Class** type_info() {
            static app::SrpSampler__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SrpSampler__Class**)(modloader::win::memory::resolve_rva(0x0475B128));
            }
            return cache;
        }
        inline app::SrpSampler__Class* get_class() {
            return il2cpp::get_class<app::SrpSampler__Class>(type_info(), "Moon.Rendering", "SrpSampler");
        }
        inline app::SrpSampler* create() {
            return il2cpp::create_object<app::SrpSampler>(get_class());
        }
        inline app::SrpSampler__Boxed* box(app::SrpSampler value) {
            return il2cpp::box_value<app::SrpSampler__Boxed>(get_class(), value);
        }
        inline app::SrpSampler__Array* create_array(int size) {
            return il2cpp::array_new<app::SrpSampler__Array>(get_class(), size);
        }
        inline app::SrpSampler__Array* create_array(const std::vector<app::SrpSampler>& items) {
            return il2cpp::array_new<app::SrpSampler__Array>(get_class(), items);
        }
    } // namespace SrpSampler
} // namespace app::classes::types
