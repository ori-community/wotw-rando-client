#pragma once
#include <Modloader/app/structs/UberCageMesh.h>
#include <Modloader/app/structs/UberCageMesh__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberCageMesh {
        inline app::UberCageMesh__Class** type_info() {
            static app::UberCageMesh__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UberCageMesh__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UberCageMesh__Class* get_class() {
            return il2cpp::get_class<app::UberCageMesh__Class>(type_info(), "", "UberCageMesh");
        }
        inline app::UberCageMesh* create() {
            return il2cpp::create_object<app::UberCageMesh>(get_class());
        }
    } // namespace UberCageMesh
} // namespace app::classes::types
