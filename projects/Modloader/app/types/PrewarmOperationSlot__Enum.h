#pragma once
#include <Modloader/app/structs/PrewarmOperationSlot__Enum.h>
#include <Modloader/app/structs/PrewarmOperationSlot__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PrewarmOperationSlot__Enum {
        inline app::PrewarmOperationSlot__Enum__Class** type_info() {
            static app::PrewarmOperationSlot__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PrewarmOperationSlot__Enum__Class**)(modloader::win::memory::resolve_rva(0x04743858));
            }
            return cache;
        }
        inline app::PrewarmOperationSlot__Enum__Class* get_class() {
            return il2cpp::get_class<app::PrewarmOperationSlot__Enum__Class>(type_info(), "frameworks.loading.Prewarmers", "PrewarmOperationSlot");
        }
        inline app::PrewarmOperationSlot__Enum* create() {
            return il2cpp::create_object<app::PrewarmOperationSlot__Enum>(get_class());
        }
    } // namespace PrewarmOperationSlot__Enum
} // namespace app::classes::types
