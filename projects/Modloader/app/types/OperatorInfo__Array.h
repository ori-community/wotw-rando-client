#pragma once
#include <Modloader/app/structs/OperatorInfo__Array.h>
#include <Modloader/app/structs/OperatorInfo__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace OperatorInfo__Array {
        inline app::OperatorInfo__Array__Class** type_info() {
            static app::OperatorInfo__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::OperatorInfo__Array__Class**)(modloader::win::memory::resolve_rva(0x04764258));
            }
            return cache;
        }
        inline app::OperatorInfo__Array__Class* get_class() {
            return il2cpp::get_class<app::OperatorInfo__Array__Class>(type_info(), "System.Data", "OperatorInfo[]");
        }
        inline app::OperatorInfo__Array* create() {
            return il2cpp::create_object<app::OperatorInfo__Array>(get_class());
        }
    } // namespace OperatorInfo__Array
} // namespace app::classes::types
