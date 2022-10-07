#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SrpSampler {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SrpSampler__Class** type_info;
        inline app::SrpSampler__Class* get_class() {
            return il2cpp::get_class<app::SrpSampler__Class>(type_info, "Moon.Rendering", "SrpSampler");
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
