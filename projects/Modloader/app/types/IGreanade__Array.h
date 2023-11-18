#pragma once
#include <Modloader/app/structs/IGreanade__Array.h>
#include <Modloader/app/structs/IGreanade__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IGreanade__Array {
        inline app::IGreanade__Array__Class** type_info() {
            static app::IGreanade__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::IGreanade__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::IGreanade__Array__Class* get_class() {
            return il2cpp::get_class<app::IGreanade__Array__Class>(type_info(), "", "IGreanade[]");
        }
        inline app::IGreanade__Array* create() {
            return il2cpp::create_object<app::IGreanade__Array>(get_class());
        }
    } // namespace IGreanade__Array
} // namespace app::classes::types
