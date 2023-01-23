#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/TextMesh__Class.h>
#include <Modloader/app/structs/TextMesh.h>

namespace app::classes::types {
    namespace TextMesh {
        namespace {
            inline app::TextMesh__Class* type_info_ref = nullptr;
        }
        inline app::TextMesh__Class** type_info = &type_info_ref;
        inline app::TextMesh__Class* get_class() {
            return il2cpp::get_class<app::TextMesh__Class>(type_info, "UnityEngine", "TextMesh");
        }
        inline app::TextMesh* create() {
            return il2cpp::create_object<app::TextMesh>(get_class());
        }
    } // namespace TextMesh
} // namespace app::classes::types
