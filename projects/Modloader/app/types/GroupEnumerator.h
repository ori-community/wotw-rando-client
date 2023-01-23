#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/GroupEnumerator__Class.h>
#include <Modloader/app/structs/GroupEnumerator.h>

namespace app::classes::types {
    namespace GroupEnumerator {
        inline app::GroupEnumerator__Class** type_info = (app::GroupEnumerator__Class**)(modloader::win::memory::resolve_rva(0x0478D938));
        inline app::GroupEnumerator__Class* get_class() {
            return il2cpp::get_class<app::GroupEnumerator__Class>(type_info, "System.Text.RegularExpressions", "GroupEnumerator");
        }
        inline app::GroupEnumerator* create() {
            return il2cpp::create_object<app::GroupEnumerator>(get_class());
        }
    } // namespace GroupEnumerator
} // namespace app::classes::types
