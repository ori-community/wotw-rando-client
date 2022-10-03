#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace InsertVertexResult__Enum {
        namespace {
            app::InsertVertexResult__Enum__Class* type_info_ref = nullptr;
        }
        app::InsertVertexResult__Enum__Class** type_info = &type_info_ref;
        inline app::InsertVertexResult__Enum__Class* get_class() {
            return il2cpp::get_class<app::InsertVertexResult__Enum__Class>(type_info, "TriangleNet", "InsertVertexResult");
        }
        inline app::InsertVertexResult__Enum* create() {
            return il2cpp::create_object<app::InsertVertexResult__Enum>(get_class());
        }
    } // namespace InsertVertexResult__Enum
} // namespace app::classes::types
