#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/Expression_CatchBlockProxy__Class.h>
#include <Modloader/app/structs/Expression_CatchBlockProxy.h>

namespace app::classes::types {
    namespace Expression_CatchBlockProxy {
        namespace {
            inline app::Expression_CatchBlockProxy__Class* type_info_ref = nullptr;
        }
        inline app::Expression_CatchBlockProxy__Class** type_info = &type_info_ref;
        inline app::Expression_CatchBlockProxy__Class* get_class() {
            return il2cpp::get_nested_class<app::Expression_CatchBlockProxy__Class>(type_info, "System.Linq.Expressions", "Expression", "CatchBlockProxy");
        }
        inline app::Expression_CatchBlockProxy* create() {
            return il2cpp::create_object<app::Expression_CatchBlockProxy>(get_class());
        }
    } // namespace Expression_CatchBlockProxy
} // namespace app::classes::types
