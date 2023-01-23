#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/Parser__Class.h>
#include <Modloader/app/structs/Parser.h>

namespace app::classes::types {
    namespace Parser {
        inline app::Parser__Class** type_info = (app::Parser__Class**)(modloader::win::memory::resolve_rva(0x0472B450));
        inline app::Parser__Class* get_class() {
            return il2cpp::get_class<app::Parser__Class>(type_info, "System.Security.Util", "Parser");
        }
        inline app::Parser* create() {
            return il2cpp::create_object<app::Parser>(get_class());
        }
    } // namespace Parser
} // namespace app::classes::types
