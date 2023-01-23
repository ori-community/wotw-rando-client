#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/VerletVertexMetaData__Class.h>
#include <Modloader/app/structs/VerletVertexMetaData.h>

namespace app::classes::types {
    namespace VerletVertexMetaData {
        namespace {
            inline app::VerletVertexMetaData__Class* type_info_ref = nullptr;
        }
        inline app::VerletVertexMetaData__Class** type_info = &type_info_ref;
        inline app::VerletVertexMetaData__Class* get_class() {
            return il2cpp::get_class<app::VerletVertexMetaData__Class>(type_info, "", "VerletVertexMetaData");
        }
        inline app::VerletVertexMetaData* create() {
            return il2cpp::create_object<app::VerletVertexMetaData>(get_class());
        }
    } // namespace VerletVertexMetaData
} // namespace app::classes::types
