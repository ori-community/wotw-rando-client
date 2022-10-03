#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace VerletVertexMetaData {
        namespace {
            app::VerletVertexMetaData__Class* type_info_ref = nullptr;
        }
        app::VerletVertexMetaData__Class** type_info = &type_info_ref;
        inline app::VerletVertexMetaData__Class* get_class() {
            return il2cpp::get_class<app::VerletVertexMetaData__Class>(type_info, "", "VerletVertexMetaData");
        }
        inline app::VerletVertexMetaData* create() {
            return il2cpp::create_object<app::VerletVertexMetaData>(get_class());
        }
    } // namespace VerletVertexMetaData
} // namespace app::classes::types
