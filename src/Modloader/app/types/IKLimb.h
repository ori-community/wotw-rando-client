#pragma once
#include <Modloader/app/structs/IKLimb.h>
#include <Modloader/app/structs/IKLimb__Array.h>
#include <Modloader/app/structs/IKLimb__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IKLimb {
        inline app::IKLimb__Class** type_info() {
            static app::IKLimb__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::IKLimb__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::IKLimb__Class* get_class() {
            return il2cpp::get_class<app::IKLimb__Class>(type_info(), "Moon", "IKLimb");
        }
        inline app::IKLimb* create() {
            return il2cpp::create_object<app::IKLimb>(get_class());
        }
        inline app::IKLimb__Array* create_array(int size) {
            return il2cpp::array_new<app::IKLimb__Array>(get_class(), size);
        }
        inline app::IKLimb__Array* create_array(const std::vector<app::IKLimb*>& items) {
            return il2cpp::array_new<app::IKLimb__Array>(get_class(), items);
        }
    } // namespace IKLimb
} // namespace app::classes::types
