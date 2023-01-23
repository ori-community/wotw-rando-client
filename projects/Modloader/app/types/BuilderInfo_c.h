#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/BuilderInfo_c__Class.h>
#include <Modloader/app/structs/BuilderInfo_c.h>

namespace app::classes::types {
    namespace BuilderInfo_c {
        inline app::BuilderInfo_c__Class** type_info = (app::BuilderInfo_c__Class**)(modloader::win::memory::resolve_rva(0x0475B990));
        inline app::BuilderInfo_c__Class* get_class() {
            return il2cpp::get_nested_class<app::BuilderInfo_c__Class>(type_info, "", "BuilderInfo", "<>c");
        }
        inline app::BuilderInfo_c* create() {
            return il2cpp::create_object<app::BuilderInfo_c>(get_class());
        }
    } // namespace BuilderInfo_c
} // namespace app::classes::types
