#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/AkTriangleArray__Class.h>
#include <Modloader/app/structs/AkTriangleArray.h>

namespace app::classes::types {
    namespace AkTriangleArray {
        namespace {
            inline app::AkTriangleArray__Class* type_info_ref = nullptr;
        }
        inline app::AkTriangleArray__Class** type_info = &type_info_ref;
        inline app::AkTriangleArray__Class* get_class() {
            return il2cpp::get_class<app::AkTriangleArray__Class>(type_info, "", "AkTriangleArray");
        }
        inline app::AkTriangleArray* create() {
            return il2cpp::create_object<app::AkTriangleArray>(get_class());
        }
    } // namespace AkTriangleArray
} // namespace app::classes::types
