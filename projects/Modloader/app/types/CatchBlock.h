#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/CatchBlock__Class.h>
#include <Modloader/app/structs/CatchBlock.h>
#include <Modloader/app/structs/CatchBlock__Array.h>

namespace app::classes::types {
    namespace CatchBlock {
        inline app::CatchBlock__Class** type_info = (app::CatchBlock__Class**)(modloader::win::memory::resolve_rva(0x0477E518));
        inline app::CatchBlock__Class* get_class() {
            return il2cpp::get_class<app::CatchBlock__Class>(type_info, "System.Linq.Expressions", "CatchBlock");
        }
        inline app::CatchBlock* create() {
            return il2cpp::create_object<app::CatchBlock>(get_class());
        }
        inline app::CatchBlock__Array* create_array(int size) {
            return il2cpp::array_new<app::CatchBlock__Array>(get_class(), size);
        }
        inline app::CatchBlock__Array* create_array(const std::vector<app::CatchBlock*>& items) {
            return il2cpp::array_new<app::CatchBlock__Array>(get_class(), items);
        }
    } // namespace CatchBlock
} // namespace app::classes::types
