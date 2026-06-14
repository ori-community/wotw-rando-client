#pragma once
#include <Modloader/app/structs/BoneWeight.h>
#include <Modloader/app/structs/BoneWeight__Array.h>
#include <Modloader/app/structs/BoneWeight__Boxed.h>
#include <Modloader/app/structs/BoneWeight__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BoneWeight {
        inline app::BoneWeight__Class** type_info() {
            static app::BoneWeight__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::BoneWeight__Class**)(modloader::win::memory::resolve_rva(0x04795DE8));
            }
            return cache;
        }
        inline app::BoneWeight__Class* get_class() {
            return il2cpp::get_class<app::BoneWeight__Class>(type_info(), "UnityEngine", "BoneWeight");
        }
        inline app::BoneWeight* create() {
            return il2cpp::create_object<app::BoneWeight>(get_class());
        }
        inline app::BoneWeight__Boxed* box(app::BoneWeight value) {
            return il2cpp::box_value<app::BoneWeight__Boxed>(get_class(), value);
        }
        inline app::BoneWeight__Array* create_array(int size) {
            return il2cpp::array_new<app::BoneWeight__Array>(get_class(), size);
        }
        inline app::BoneWeight__Array* create_array(const std::vector<app::BoneWeight>& items) {
            return il2cpp::array_new<app::BoneWeight__Array>(get_class(), items);
        }
    } // namespace BoneWeight
} // namespace app::classes::types
