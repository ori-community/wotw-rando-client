#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/MemberExpression__Class.h>
#include <Modloader/app/structs/MemberExpression.h>

namespace app::classes::types {
    namespace MemberExpression {
        inline app::MemberExpression__Class** type_info = (app::MemberExpression__Class**)(modloader::win::memory::resolve_rva(0x047062A0));
        inline app::MemberExpression__Class* get_class() {
            return il2cpp::get_class<app::MemberExpression__Class>(type_info, "System.Linq.Expressions", "MemberExpression");
        }
        inline app::MemberExpression* create() {
            return il2cpp::create_object<app::MemberExpression>(get_class());
        }
    } // namespace MemberExpression
} // namespace app::classes::types
