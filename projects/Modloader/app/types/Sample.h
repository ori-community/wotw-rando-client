#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/Sample__Class.h>
#include <Modloader/app/structs/Sample.h>
#include <Modloader/app/structs/Sample__Array.h>

namespace app::classes::types {
    namespace Sample {
        inline app::Sample__Class** type_info = (app::Sample__Class**)(modloader::win::memory::resolve_rva(0x0472EA08));
        inline app::Sample__Class* get_class() {
            return il2cpp::get_class<app::Sample__Class>(type_info, "Moon.ArtOptimization", "Sample");
        }
        inline app::Sample* create() {
            return il2cpp::create_object<app::Sample>(get_class());
        }
        inline app::Sample__Array* create_array(int size) {
            return il2cpp::array_new<app::Sample__Array>(get_class(), size);
        }
        inline app::Sample__Array* create_array(const std::vector<app::Sample*>& items) {
            return il2cpp::array_new<app::Sample__Array>(get_class(), items);
        }
    } // namespace Sample
} // namespace app::classes::types
