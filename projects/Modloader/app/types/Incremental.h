#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/Incremental__Class.h>
#include <Modloader/app/structs/Incremental.h>

namespace app::classes::types {
    namespace Incremental {
        namespace {
            inline app::Incremental__Class* type_info_ref = nullptr;
        }
        inline app::Incremental__Class** type_info = &type_info_ref;
        inline app::Incremental__Class* get_class() {
            return il2cpp::get_class<app::Incremental__Class>(type_info, "TriangleNet.Meshing.Algorithm", "Incremental");
        }
        inline app::Incremental* create() {
            return il2cpp::create_object<app::Incremental>(get_class());
        }
    } // namespace Incremental
} // namespace app::classes::types
