#pragma once
#include <Modloader/app/structs/HServerQuery.h>
#include <Modloader/app/structs/HServerQuery__Boxed.h>
#include <Modloader/app/structs/HServerQuery__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace HServerQuery {
        inline app::HServerQuery__Class** type_info() {
            static app::HServerQuery__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::HServerQuery__Class**)(modloader::win::memory::resolve_rva(0x047164A0));
            }
            return cache;
        }
        inline app::HServerQuery__Class* get_class() {
            return il2cpp::get_class<app::HServerQuery__Class>(type_info(), "Steamworks", "HServerQuery");
        }
        inline app::HServerQuery* create() {
            return il2cpp::create_object<app::HServerQuery>(get_class());
        }
        inline app::HServerQuery__Boxed* box(app::HServerQuery value) {
            return il2cpp::box_value<app::HServerQuery__Boxed>(get_class(), value);
        }
    } // namespace HServerQuery
} // namespace app::classes::types
