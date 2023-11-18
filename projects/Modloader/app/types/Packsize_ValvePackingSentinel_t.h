#pragma once
#include <Modloader/app/structs/Packsize_ValvePackingSentinel_t.h>
#include <Modloader/app/structs/Packsize_ValvePackingSentinel_t__Boxed.h>
#include <Modloader/app/structs/Packsize_ValvePackingSentinel_t__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Packsize_ValvePackingSentinel_t {
        inline app::Packsize_ValvePackingSentinel_t__Class** type_info() {
            static app::Packsize_ValvePackingSentinel_t__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Packsize_ValvePackingSentinel_t__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Packsize_ValvePackingSentinel_t__Class* get_class() {
            return il2cpp::get_nested_class<app::Packsize_ValvePackingSentinel_t__Class>(type_info(), "Steamworks", "Packsize", "ValvePackingSentinel_t");
        }
        inline app::Packsize_ValvePackingSentinel_t* create() {
            return il2cpp::create_object<app::Packsize_ValvePackingSentinel_t>(get_class());
        }
        inline app::Packsize_ValvePackingSentinel_t__Boxed* box(app::Packsize_ValvePackingSentinel_t value) {
            return il2cpp::box_value<app::Packsize_ValvePackingSentinel_t__Boxed>(get_class(), value);
        }
    } // namespace Packsize_ValvePackingSentinel_t
} // namespace app::classes::types
