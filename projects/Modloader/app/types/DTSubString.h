#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/DTSubString__Class.h>
#include <Modloader/app/structs/DTSubString.h>
#include <Modloader/app/structs/DTSubString__Boxed.h>

namespace app::classes::types {
    namespace DTSubString {
        namespace {
            inline app::DTSubString__Class* type_info_ref = nullptr;
        }
        inline app::DTSubString__Class** type_info = &type_info_ref;
        inline app::DTSubString__Class* get_class() {
            return il2cpp::get_class<app::DTSubString__Class>(type_info, "System", "DTSubString");
        }
        inline app::DTSubString* create() {
            return il2cpp::create_object<app::DTSubString>(get_class());
        }
        inline app::DTSubString__Boxed* box(app::DTSubString value) {
            return il2cpp::box_value<app::DTSubString__Boxed>(get_class(), value);
        }
    } // namespace DTSubString
} // namespace app::classes::types
