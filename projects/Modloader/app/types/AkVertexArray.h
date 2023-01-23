#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/AkVertexArray__Class.h>
#include <Modloader/app/structs/AkVertexArray.h>

namespace app::classes::types {
    namespace AkVertexArray {
        namespace {
            inline app::AkVertexArray__Class* type_info_ref = nullptr;
        }
        inline app::AkVertexArray__Class** type_info = &type_info_ref;
        inline app::AkVertexArray__Class* get_class() {
            return il2cpp::get_class<app::AkVertexArray__Class>(type_info, "", "AkVertexArray");
        }
        inline app::AkVertexArray* create() {
            return il2cpp::create_object<app::AkVertexArray>(get_class());
        }
    } // namespace AkVertexArray
} // namespace app::classes::types
