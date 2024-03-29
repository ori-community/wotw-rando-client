#pragma once
#include <Modloader/app/structs/MeshFilter.h>
#include <Modloader/app/structs/MeshFilter__Array.h>
#include <Modloader/app/structs/MeshFilter__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MeshFilter {
        inline app::MeshFilter__Class** type_info() {
            static app::MeshFilter__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MeshFilter__Class**)(modloader::win::memory::resolve_rva(0x0477A9F0));
            }
            return cache;
        }
        inline app::MeshFilter__Class* get_class() {
            return il2cpp::get_class<app::MeshFilter__Class>(type_info(), "UnityEngine", "MeshFilter");
        }
        inline app::MeshFilter* create() {
            return il2cpp::create_object<app::MeshFilter>(get_class());
        }
        inline app::MeshFilter__Array* create_array(int size) {
            return il2cpp::array_new<app::MeshFilter__Array>(get_class(), size);
        }
        inline app::MeshFilter__Array* create_array(const std::vector<app::MeshFilter*>& items) {
            return il2cpp::array_new<app::MeshFilter__Array>(get_class(), items);
        }
    } // namespace MeshFilter
} // namespace app::classes::types
