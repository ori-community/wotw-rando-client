#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace AkAcousticSurfaceArray {
        namespace {
            inline app::AkAcousticSurfaceArray__Class* type_info_ref = nullptr;
        }
        inline app::AkAcousticSurfaceArray__Class** type_info = &type_info_ref;
        inline app::AkAcousticSurfaceArray__Class* get_class() {
            return il2cpp::get_class<app::AkAcousticSurfaceArray__Class>(type_info, "", "AkAcousticSurfaceArray");
        }
        inline app::AkAcousticSurfaceArray* create() {
            return il2cpp::create_object<app::AkAcousticSurfaceArray>(get_class());
        }
    } // namespace AkAcousticSurfaceArray
} // namespace app::classes::types
