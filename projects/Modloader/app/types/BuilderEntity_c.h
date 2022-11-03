#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace BuilderEntity_c {
        inline app::BuilderEntity_c__Class** type_info = (app::BuilderEntity_c__Class**)(modloader::win::memory::resolve_rva(0x047542A8));
        inline app::BuilderEntity_c__Class* get_class() {
            return il2cpp::get_nested_class<app::BuilderEntity_c__Class>(type_info, "", "BuilderEntity", "<>c");
        }
        inline app::BuilderEntity_c* create() {
            return il2cpp::create_object<app::BuilderEntity_c>(get_class());
        }
    } // namespace BuilderEntity_c
} // namespace app::classes::types
