#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IFileFormat__Array {
        namespace {
            app::IFileFormat__Array__Class* type_info_ref = nullptr;
        }
        app::IFileFormat__Array__Class** type_info = &type_info_ref;
        inline app::IFileFormat__Array__Class* get_class() {
            return il2cpp::get_class<app::IFileFormat__Array__Class>(type_info, "TriangleNet.IO", "IFileFormat[]");
        }
        inline app::IFileFormat__Array* create() {
            return il2cpp::create_object<app::IFileFormat__Array>(get_class());
        }
    } // namespace IFileFormat__Array
} // namespace app::classes::types
