#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace HServerQuery {
        inline app::HServerQuery__Class** type_info = (app::HServerQuery__Class**)(modloader::win::memory::resolve_rva(0x047164A0));
        inline app::HServerQuery__Class* get_class() {
            return il2cpp::get_class<app::HServerQuery__Class>(type_info, "Steamworks", "HServerQuery");
        }
        inline app::HServerQuery* create() {
            return il2cpp::create_object<app::HServerQuery>(get_class());
        }
        inline app::HServerQuery__Boxed* box(app::HServerQuery value) {
            return il2cpp::box_value<app::HServerQuery__Boxed>(get_class(), value);
        }
    } // namespace HServerQuery
} // namespace app::classes::types
