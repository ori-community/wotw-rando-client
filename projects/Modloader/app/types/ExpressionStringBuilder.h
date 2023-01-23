#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ExpressionStringBuilder__Class.h>
#include <Modloader/app/structs/ExpressionStringBuilder.h>

namespace app::classes::types {
    namespace ExpressionStringBuilder {
        inline app::ExpressionStringBuilder__Class** type_info = (app::ExpressionStringBuilder__Class**)(modloader::win::memory::resolve_rva(0x04781ED0));
        inline app::ExpressionStringBuilder__Class* get_class() {
            return il2cpp::get_class<app::ExpressionStringBuilder__Class>(type_info, "System.Linq.Expressions", "ExpressionStringBuilder");
        }
        inline app::ExpressionStringBuilder* create() {
            return il2cpp::create_object<app::ExpressionStringBuilder>(get_class());
        }
    } // namespace ExpressionStringBuilder
} // namespace app::classes::types
