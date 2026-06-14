#pragma once
#include <Modloader/app/structs/CCGradient.h>
#include <Modloader/app/structs/CCGradient__Array.h>
#include <Modloader/app/structs/CCGradient__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CCGradient {
        inline app::CCGradient__Class** type_info() {
            static app::CCGradient__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CCGradient__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CCGradient__Class* get_class() {
            return il2cpp::get_class<app::CCGradient__Class>(type_info(), "", "CCGradient");
        }
        inline app::CCGradient* create() {
            return il2cpp::create_object<app::CCGradient>(get_class());
        }
        inline app::CCGradient__Array* create_array(int size) {
            return il2cpp::array_new<app::CCGradient__Array>(get_class(), size);
        }
        inline app::CCGradient__Array* create_array(const std::vector<app::CCGradient*>& items) {
            return il2cpp::array_new<app::CCGradient__Array>(get_class(), items);
        }
    } // namespace CCGradient
} // namespace app::classes::types
