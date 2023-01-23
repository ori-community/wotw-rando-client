#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SimpleScripting_c__Class.h>
#include <Modloader/app/structs/SimpleScripting_c.h>

namespace app::classes::types {
    namespace SimpleScripting_c {
        inline app::SimpleScripting_c__Class** type_info = (app::SimpleScripting_c__Class**)(modloader::win::memory::resolve_rva(0x0473E988));
        inline app::SimpleScripting_c__Class* get_class() {
            return il2cpp::get_nested_class<app::SimpleScripting_c__Class>(type_info, "ZenFulcrum.EmbeddedBrowser", "SimpleScripting", "<>c");
        }
        inline app::SimpleScripting_c* create() {
            return il2cpp::create_object<app::SimpleScripting_c>(get_class());
        }
    } // namespace SimpleScripting_c
} // namespace app::classes::types
