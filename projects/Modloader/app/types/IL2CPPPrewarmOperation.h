#pragma once
#include <Modloader/app/structs/IL2CPPPrewarmOperation.h>
#include <Modloader/app/structs/IL2CPPPrewarmOperation__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IL2CPPPrewarmOperation {
        inline app::IL2CPPPrewarmOperation__Class** type_info() {
            static app::IL2CPPPrewarmOperation__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IL2CPPPrewarmOperation__Class**)(modloader::win::memory::resolve_rva(0x04763700));
            }
            return cache;
        }
        inline app::IL2CPPPrewarmOperation__Class* get_class() {
            return il2cpp::get_class<app::IL2CPPPrewarmOperation__Class>(type_info(), "frameworks.loading.Prewarmers", "IL2CPPPrewarmOperation");
        }
        inline app::IL2CPPPrewarmOperation* create() {
            return il2cpp::create_object<app::IL2CPPPrewarmOperation>(get_class());
        }
    } // namespace IL2CPPPrewarmOperation
} // namespace app::classes::types
