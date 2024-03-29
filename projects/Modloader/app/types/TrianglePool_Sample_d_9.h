#pragma once
#include <Modloader/app/structs/TrianglePool_Sample_d_9.h>
#include <Modloader/app/structs/TrianglePool_Sample_d_9__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TrianglePool_Sample_d_9 {
        inline app::TrianglePool_Sample_d_9__Class** type_info() {
            static app::TrianglePool_Sample_d_9__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::TrianglePool_Sample_d_9__Class**)(modloader::win::memory::resolve_rva(0x0474D0B0));
            }
            return cache;
        }
        inline app::TrianglePool_Sample_d_9__Class* get_class() {
            return il2cpp::get_nested_class<app::TrianglePool_Sample_d_9__Class>(type_info(), "TriangleNet", "TrianglePool", "<Sample>d__9");
        }
        inline app::TrianglePool_Sample_d_9* create() {
            return il2cpp::create_object<app::TrianglePool_Sample_d_9>(get_class());
        }
    } // namespace TrianglePool_Sample_d_9
} // namespace app::classes::types
