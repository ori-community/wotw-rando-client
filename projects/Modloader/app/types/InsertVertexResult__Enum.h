#pragma once
#include <Modloader/app/structs/InsertVertexResult__Enum.h>
#include <Modloader/app/structs/InsertVertexResult__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace InsertVertexResult__Enum {
        inline app::InsertVertexResult__Enum__Class** type_info() {
            static app::InsertVertexResult__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::InsertVertexResult__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::InsertVertexResult__Enum__Class* get_class() {
            return il2cpp::get_class<app::InsertVertexResult__Enum__Class>(type_info(), "TriangleNet", "InsertVertexResult");
        }
        inline app::InsertVertexResult__Enum* create() {
            return il2cpp::create_object<app::InsertVertexResult__Enum>(get_class());
        }
    } // namespace InsertVertexResult__Enum
} // namespace app::classes::types
