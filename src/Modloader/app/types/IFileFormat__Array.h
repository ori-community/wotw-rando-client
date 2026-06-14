#pragma once
#include <Modloader/app/structs/IFileFormat__Array.h>
#include <Modloader/app/structs/IFileFormat__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IFileFormat__Array {
        inline app::IFileFormat__Array__Class** type_info() {
            static app::IFileFormat__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::IFileFormat__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::IFileFormat__Array__Class* get_class() {
            return il2cpp::get_class<app::IFileFormat__Array__Class>(type_info(), "TriangleNet.IO", "IFileFormat[]");
        }
        inline app::IFileFormat__Array* create() {
            return il2cpp::create_object<app::IFileFormat__Array>(get_class());
        }
    } // namespace IFileFormat__Array
} // namespace app::classes::types
