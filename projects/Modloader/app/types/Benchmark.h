#pragma once
#include <Modloader/app/structs/Benchmark.h>
#include <Modloader/app/structs/Benchmark__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Benchmark {
        inline app::Benchmark__Class** type_info() {
            static app::Benchmark__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Benchmark__Class**)(modloader::win::memory::resolve_rva(0x04737B50));
            }
            return cache;
        }
        inline app::Benchmark__Class* get_class() {
            return il2cpp::get_class<app::Benchmark__Class>(type_info(), "", "Benchmark");
        }
        inline app::Benchmark* create() {
            return il2cpp::create_object<app::Benchmark>(get_class());
        }
    } // namespace Benchmark
} // namespace app::classes::types
