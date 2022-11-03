#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace LabelTarget__Array {
        namespace {
            inline app::LabelTarget__Array__Class* type_info_ref = nullptr;
        }
        inline app::LabelTarget__Array__Class** type_info = &type_info_ref;
        inline app::LabelTarget__Array__Class* get_class() {
            return il2cpp::get_class<app::LabelTarget__Array__Class>(type_info, "System.Linq.Expressions", "LabelTarget[]");
        }
        inline app::LabelTarget__Array* create() {
            return il2cpp::create_object<app::LabelTarget__Array>(get_class());
        }
    } // namespace LabelTarget__Array
} // namespace app::classes::types
