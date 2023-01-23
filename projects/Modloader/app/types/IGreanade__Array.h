#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/IGreanade__Array__Class.h>
#include <Modloader/app/structs/IGreanade__Array.h>

namespace app::classes::types {
    namespace IGreanade__Array {
        namespace {
            inline app::IGreanade__Array__Class* type_info_ref = nullptr;
        }
        inline app::IGreanade__Array__Class** type_info = &type_info_ref;
        inline app::IGreanade__Array__Class* get_class() {
            return il2cpp::get_class<app::IGreanade__Array__Class>(type_info, "", "IGreanade[]");
        }
        inline app::IGreanade__Array* create() {
            return il2cpp::create_object<app::IGreanade__Array>(get_class());
        }
    } // namespace IGreanade__Array
} // namespace app::classes::types
