#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/HTML_NewWindow_t__Class.h>
#include <Modloader/app/structs/HTML_NewWindow_t.h>
#include <Modloader/app/structs/HTML_NewWindow_t__Boxed.h>

namespace app::classes::types {
    namespace HTML_NewWindow_t {
        namespace {
            inline app::HTML_NewWindow_t__Class* type_info_ref = nullptr;
        }
        inline app::HTML_NewWindow_t__Class** type_info = &type_info_ref;
        inline app::HTML_NewWindow_t__Class* get_class() {
            return il2cpp::get_class<app::HTML_NewWindow_t__Class>(type_info, "Steamworks", "HTML_NewWindow_t");
        }
        inline app::HTML_NewWindow_t* create() {
            return il2cpp::create_object<app::HTML_NewWindow_t>(get_class());
        }
        inline app::HTML_NewWindow_t__Boxed* box(app::HTML_NewWindow_t value) {
            return il2cpp::box_value<app::HTML_NewWindow_t__Boxed>(get_class(), value);
        }
    } // namespace HTML_NewWindow_t
} // namespace app::classes::types
