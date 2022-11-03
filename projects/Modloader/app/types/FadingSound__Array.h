#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace FadingSound__Array {
        namespace {
            inline app::FadingSound__Array__Class* type_info_ref = nullptr;
        }
        inline app::FadingSound__Array__Class** type_info = &type_info_ref;
        inline app::FadingSound__Array__Class* get_class() {
            return il2cpp::get_class<app::FadingSound__Array__Class>(type_info, "", "FadingSound[]");
        }
        inline app::FadingSound__Array* create() {
            return il2cpp::create_object<app::FadingSound__Array>(get_class());
        }
    } // namespace FadingSound__Array
} // namespace app::classes::types
