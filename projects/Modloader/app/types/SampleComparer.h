#pragma once
#include <Modloader/app/structs/SampleComparer.h>
#include <Modloader/app/structs/SampleComparer__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SampleComparer {
        inline app::SampleComparer__Class** type_info() {
            static app::SampleComparer__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SampleComparer__Class**)(modloader::win::memory::resolve_rva(0x0472F730));
            }
            return cache;
        }
        inline app::SampleComparer__Class* get_class() {
            return il2cpp::get_class<app::SampleComparer__Class>(type_info(), "Moon.ArtOptimization", "SampleComparer");
        }
        inline app::SampleComparer* create() {
            return il2cpp::create_object<app::SampleComparer>(get_class());
        }
    } // namespace SampleComparer
} // namespace app::classes::types
