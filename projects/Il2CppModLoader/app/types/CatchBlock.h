#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CatchBlock {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CatchBlock__Class** type_info;
        inline app::CatchBlock__Class* get_class() {
            return il2cpp::get_class<app::CatchBlock__Class>(type_info, "System.Linq.Expressions", "CatchBlock");
        }
        inline app::CatchBlock* create() {
            return il2cpp::create_object<app::CatchBlock>(get_class());
        }
        inline app::CatchBlock__Array* create_array(int size) {
            return il2cpp::array_new<app::CatchBlock__Array>(get_class(), size);
        }
    } // namespace CatchBlock
} // namespace app::classes::types
