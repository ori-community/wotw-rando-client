#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ConfiguredTaskAwaitable__Class.h>
#include <Modloader/app/structs/ConfiguredTaskAwaitable.h>
#include <Modloader/app/structs/ConfiguredTaskAwaitable__Boxed.h>

namespace app::classes::types {
    namespace ConfiguredTaskAwaitable {
        namespace {
            inline app::ConfiguredTaskAwaitable__Class* type_info_ref = nullptr;
        }
        inline app::ConfiguredTaskAwaitable__Class** type_info = &type_info_ref;
        inline app::ConfiguredTaskAwaitable__Class* get_class() {
            return il2cpp::get_class<app::ConfiguredTaskAwaitable__Class>(type_info, "System.Runtime.CompilerServices", "ConfiguredTaskAwaitable");
        }
        inline app::ConfiguredTaskAwaitable* create() {
            return il2cpp::create_object<app::ConfiguredTaskAwaitable>(get_class());
        }
        inline app::ConfiguredTaskAwaitable__Boxed* box(app::ConfiguredTaskAwaitable value) {
            return il2cpp::box_value<app::ConfiguredTaskAwaitable__Boxed>(get_class(), value);
        }
    } // namespace ConfiguredTaskAwaitable
} // namespace app::classes::types
