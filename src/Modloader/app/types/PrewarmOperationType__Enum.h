#pragma once
#include <Modloader/app/structs/PrewarmOperationType__Enum.h>
#include <Modloader/app/structs/PrewarmOperationType__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PrewarmOperationType__Enum {
        inline app::PrewarmOperationType__Enum__Class** type_info() {
            static app::PrewarmOperationType__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PrewarmOperationType__Enum__Class**)(modloader::win::memory::resolve_rva(0x0472D140));
            }
            return cache;
        }
        inline app::PrewarmOperationType__Enum__Class* get_class() {
            return il2cpp::get_class<app::PrewarmOperationType__Enum__Class>(type_info(), "frameworks.loading.Prewarmers", "PrewarmOperationType");
        }
        inline app::PrewarmOperationType__Enum* create() {
            return il2cpp::create_object<app::PrewarmOperationType__Enum>(get_class());
        }
    } // namespace PrewarmOperationType__Enum
} // namespace app::classes::types
