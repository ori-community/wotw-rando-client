#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/MergablePropertyAttribute__Class.h>
#include <Modloader/app/structs/MergablePropertyAttribute.h>

namespace app::classes::types {
    namespace MergablePropertyAttribute {
        inline app::MergablePropertyAttribute__Class** type_info = (app::MergablePropertyAttribute__Class**)(modloader::win::memory::resolve_rva(0x04798C00));
        inline app::MergablePropertyAttribute__Class* get_class() {
            return il2cpp::get_class<app::MergablePropertyAttribute__Class>(type_info, "System.ComponentModel", "MergablePropertyAttribute");
        }
        inline app::MergablePropertyAttribute* create() {
            return il2cpp::create_object<app::MergablePropertyAttribute>(get_class());
        }
    } // namespace MergablePropertyAttribute
} // namespace app::classes::types
