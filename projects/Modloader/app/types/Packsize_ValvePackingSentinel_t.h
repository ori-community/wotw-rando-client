#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/Packsize_ValvePackingSentinel_t__Class.h>
#include <Modloader/app/structs/Packsize_ValvePackingSentinel_t.h>
#include <Modloader/app/structs/Packsize_ValvePackingSentinel_t__Boxed.h>

namespace app::classes::types {
    namespace Packsize_ValvePackingSentinel_t {
        namespace {
            inline app::Packsize_ValvePackingSentinel_t__Class* type_info_ref = nullptr;
        }
        inline app::Packsize_ValvePackingSentinel_t__Class** type_info = &type_info_ref;
        inline app::Packsize_ValvePackingSentinel_t__Class* get_class() {
            return il2cpp::get_nested_class<app::Packsize_ValvePackingSentinel_t__Class>(type_info, "Steamworks", "Packsize", "ValvePackingSentinel_t");
        }
        inline app::Packsize_ValvePackingSentinel_t* create() {
            return il2cpp::create_object<app::Packsize_ValvePackingSentinel_t>(get_class());
        }
        inline app::Packsize_ValvePackingSentinel_t__Boxed* box(app::Packsize_ValvePackingSentinel_t value) {
            return il2cpp::box_value<app::Packsize_ValvePackingSentinel_t__Boxed>(get_class(), value);
        }
    } // namespace Packsize_ValvePackingSentinel_t
} // namespace app::classes::types
