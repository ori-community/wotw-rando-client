#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace InsertVertexResult__Enum {
        namespace {
            inline app::InsertVertexResult__Enum__Class* type_info_ref = nullptr;
        }
        inline app::InsertVertexResult__Enum__Class** type_info = &type_info_ref;
        inline app::InsertVertexResult__Enum__Class* get_class() {
            return il2cpp::get_class<app::InsertVertexResult__Enum__Class>(type_info, "TriangleNet", "InsertVertexResult");
        }
        inline app::InsertVertexResult__Enum* create() {
            return il2cpp::create_object<app::InsertVertexResult__Enum>(get_class());
        }
    } // namespace InsertVertexResult__Enum
} // namespace app::classes::types
