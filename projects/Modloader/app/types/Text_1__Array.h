#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/Text_1__Array__Class.h>
#include <Modloader/app/structs/Text_1__Array.h>

namespace app::classes::types {
    namespace Text_1__Array {
        inline app::Text_1__Array__Class** type_info = (app::Text_1__Array__Class**)(modloader::win::memory::resolve_rva(0x047455E0));
        inline app::Text_1__Array__Class* get_class() {
            return il2cpp::get_class<app::Text_1__Array__Class>(type_info, "Moon.UI", "Text[]");
        }
        inline app::Text_1__Array* create() {
            return il2cpp::create_object<app::Text_1__Array>(get_class());
        }
    } // namespace Text_1__Array
} // namespace app::classes::types
