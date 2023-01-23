#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/BlockExpressionList__Class.h>
#include <Modloader/app/structs/BlockExpressionList.h>

namespace app::classes::types {
    namespace BlockExpressionList {
        inline app::BlockExpressionList__Class** type_info = (app::BlockExpressionList__Class**)(modloader::win::memory::resolve_rva(0x04795F50));
        inline app::BlockExpressionList__Class* get_class() {
            return il2cpp::get_class<app::BlockExpressionList__Class>(type_info, "System.Linq.Expressions", "BlockExpressionList");
        }
        inline app::BlockExpressionList* create() {
            return il2cpp::create_object<app::BlockExpressionList>(get_class());
        }
    } // namespace BlockExpressionList
} // namespace app::classes::types
