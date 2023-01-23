#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/EntityPlaceholder_c__Class.h>
#include <Modloader/app/structs/EntityPlaceholder_c.h>

namespace app::classes::types {
    namespace EntityPlaceholder_c {
        inline app::EntityPlaceholder_c__Class** type_info = (app::EntityPlaceholder_c__Class**)(modloader::win::memory::resolve_rva(0x04733970));
        inline app::EntityPlaceholder_c__Class* get_class() {
            return il2cpp::get_nested_class<app::EntityPlaceholder_c__Class>(type_info, "", "EntityPlaceholder", "<>c");
        }
        inline app::EntityPlaceholder_c* create() {
            return il2cpp::create_object<app::EntityPlaceholder_c>(get_class());
        }
    } // namespace EntityPlaceholder_c
} // namespace app::classes::types
