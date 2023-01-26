#pragma once
#include <Modloader/app/structs/hostent.h>
#include <Modloader/app/structs/hostent__Boxed.h>
#include <Modloader/app/structs/hostent__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace hostent {
        inline app::hostent__Class** type_info() {
            static app::hostent__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::hostent__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::hostent__Class* get_class() {
            return il2cpp::get_class<app::hostent__Class>(type_info(), "System.Net", "hostent");
        }
        inline app::hostent* create() {
            return il2cpp::create_object<app::hostent>(get_class());
        }
        inline app::hostent__Boxed* box(app::hostent value) {
            return il2cpp::box_value<app::hostent__Boxed>(get_class(), value);
        }
    } // namespace hostent
} // namespace app::classes::types
