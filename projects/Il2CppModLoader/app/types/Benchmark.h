#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Benchmark {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Benchmark__Class** type_info;
        inline app::Benchmark__Class* get_class() {
            return il2cpp::get_class<app::Benchmark__Class>(type_info, "", "Benchmark");
        }
        inline app::Benchmark* create() {
            return il2cpp::create_object<app::Benchmark>(get_class());
        }
    } // namespace Benchmark
} // namespace app::classes::types
