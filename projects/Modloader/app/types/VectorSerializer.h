#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/VectorSerializer__Class.h>
#include <Modloader/app/structs/VectorSerializer.h>

namespace app::classes::types {
    namespace VectorSerializer {
        namespace {
            inline app::VectorSerializer__Class* type_info_ref = nullptr;
        }
        inline app::VectorSerializer__Class** type_info = &type_info_ref;
        inline app::VectorSerializer__Class* get_class() {
            return il2cpp::get_class<app::VectorSerializer__Class>(type_info, "", "VectorSerializer");
        }
        inline app::VectorSerializer* create() {
            return il2cpp::create_object<app::VectorSerializer>(get_class());
        }
    } // namespace VectorSerializer
} // namespace app::classes::types
